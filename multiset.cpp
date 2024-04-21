#include <bits/stdc++.h>
using namespace std;
void print_multiset(multiset<char> &m)
{
    for (auto &i : m)
    {
        cout << i << "   ";
    }
}
int main()
{
    string s = "skndklklJKALFJSLKdslkjfa";
    multiset<char> ms;
    for (auto i : s)
    {
        ms.insert(i);
    }
    print_multiset(ms);
    cout << endl;
    // find and delete only delete first value
    auto it = ms.find('k');
    if (it != ms.end())
        ms.erase(it);
    print_multiset(ms);
    cout << endl;
    //  erase by key delete whole key that exist in multiset
    ms.erase('k');
    print_multiset(ms);
    return 0;
}