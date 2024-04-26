#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    int n{0};
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        auto it = m.find(s);
        if (it == m.end())
        {
            m[s]++;
            cout << "OK" << endl;
        }
        else
        {
            cout << s + to_string(it->second) << endl;
            m[s]++;
        }
    }
    return 0;
}