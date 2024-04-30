#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 1, 6, 2, 8, 6, 3, 7, 3, 4};
    auto min = min_element(v.begin(), v.end());
    cout << *min << endl;
    auto max = max_element(v.begin(), v.end());
    cout << *max << endl;
    auto fi = find(v.begin(), v.end(), 4);
    if (fi != v.end())
        cout << *fi << endl;
    else
        cout << "Not Found";
    auto sum = accumulate(v.begin(), v.end(), 0); // 0 is the initial //not a pointer
    cout << sum << endl;
    auto cot = count(v.begin(), v.end(), 3); // not a pointer
    cout << cot << endl;
    reverse(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    auto un = unique(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << *un << endl;
    sort(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    auto xx = unique(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << *xx << endl;
    v.erase(un, v.end());
    for (auto &i : v)
    {
        cout << i << "  ";
    }
}