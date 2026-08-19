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
    int k, s, p = 0;
    cin >> k >> s;
    // for (int x = 0; x < k; x++)
    // {
    //     for (int y = 0; y < k; y++)
    //     {
    //         for (int z = 0; z < k; z++)
    //         {
    //             if (s == (x + y + z))
    //             {
    //                 p++;
    //             }
    //         }
    //     }
    // }
    // cout << p;

    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - (x + y);
            if (z >= 0 && z <= k)
            {
                p++;
            }
        }
    }
    cout << p << " ";
}

// ================= Main =================
int main()
{
    fast;

    solve();

    return 0;
}