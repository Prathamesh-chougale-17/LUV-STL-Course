#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "sfkslfkas";
    unordered_map<char, int> um;
    for (auto i : s)
    {
        um[i]++;
    }
    for (auto &i : um)
    {
        cout << i.first << "  " << i.second << endl;
    }
}