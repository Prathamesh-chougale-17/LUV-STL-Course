#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count{0};
    unordered_map<char, int> m;
    int n{0}, flag{0};
    cin >> n;
    // char c;
    string s;
    cin >> s;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        flag = 0;
        if (i % 2)
        {
            for (auto &k : m)
            {
                if ((k.first - 32) == s[i])
                {
                    if (k.second)
                    {
                        flag = 1;
                        k.second--;
                    }
                    break;
                }
            }
            if (flag == 0)
            {
                count++;
            }
        }
        else
        {
            m[s[i]]++;
        }
    }
    cout << count;
    return 0;
}