#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num{0};
    map<int, multiset<string>, greater<int>> ms;
    cin >> num; // Reading input from STDIN
    while (num--)
    {
        int x{0};
        string y;
        cin >> y >> x;
        ms[x].insert(y);
    }
    for (auto &i : ms)
        for (auto &j : i.second)
            cout << j << " " << i.first << endl;
}