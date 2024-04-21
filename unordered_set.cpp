#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "lkajfaklaKDFKLSJF";
    unordered_set<char> um;
    for (auto i : s)
    {
        um.insert(i);
    }
    for (auto &i : um)
    {
        cout << i << "  ";
    }

    // find
    auto it = um.find('l');
    if (it != um.end())
    {

        cout << endl
             << *it << endl;
    }
    return 0;
}