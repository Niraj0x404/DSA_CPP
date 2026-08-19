// ================= Header =================
#include <bits/stdc++.h>
using namespace std;

// ================= Type Shortcuts =================
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

// ================= Macros =================
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)(s).size()
#define print(x) cout << (x) << '\n'
#define REP(i, a, b) for (ll i = (a); i <= (b); i++)
#define RREP(i, a, b) for (ll i = (a); i >= (b); i--)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

// ================= Debug (local testing only) =================
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

// ================= Constants =================
const ll MOD = 1000000007;
const ll INF = 1e18;

// ================= Solve Function =================
void solve()
{
    int n;
    cin >> n;
    int a = 0, b = 0, e = 0, d = 0;

    // your logic here
    vi arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            e++;
        else
            d++;
        if (arr[i] > 0)
            a++;
        else if (arr[i] < 0)
            b++;
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << d << endl;
    cout << "Positive: " << a << endl;
    cout << "Negative: " << b << endl;
}

// ================= Main =================
int main()
{
    fast;

    solve();

    return 0;
}