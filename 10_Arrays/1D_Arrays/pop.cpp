#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int m = arr.size(); // capacity() returns the total number of elements that can be stored without allocating new memory.
                        // size() → elements currently present.
    cout << "Size of an array before using push_back: " << m << ", Initial capacity: " << arr.capacity() << endl;
    arr.push_back(23);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", capacity: " << arr.capacity() << endl;
    ;
    arr.push_back(33);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", capacity: " << arr.capacity() << endl;
    arr.push_back(43);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.push_back(53);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.push_back(63);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.push_back(73);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.push_back(83);
    m = arr.size();
    cout << "Size of an array after using push_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.push_back(93);
    m = arr.size();
    cout << endl;
    cout << endl;
    cout << "Size of an array after using push_back: " << m << ", Capacity: " << arr.capacity() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Before using pop_back" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    arr.pop_back();
    m = arr.size();
    cout << "Size of an array after using pop_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.pop_back();
    m = arr.size();
    cout << "Size of an array after using pop_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.pop_back();
    m = arr.size();
    cout << "Size of an array after using pop_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.pop_back();
    m = arr.size();
    cout << "Size of an array after using pop_back: " << m << ", Capacity: " << arr.capacity() << endl;
    arr.pop_back();
    m = arr.size();
    cout << "Size of an array after using pop_back: " << m << ", Capacity: " << arr.capacity() << endl;
    cout << "After using pop_back" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
// capacity remains same
