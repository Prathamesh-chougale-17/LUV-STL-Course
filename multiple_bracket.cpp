#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> s;
        bool b = true;
        string str;
        cin >> str;
        for (auto &i : str)
        {
            if (i == '(' || i == '{' || i == '[')
                s.push(i);
            else if (!s.empty() && s.top() == '(' && i == ')')
                s.pop();
            else if (!s.empty() && s.top() == '{' && i == '}')
                s.pop();
            else if (!s.empty() && s.top() == '[' && i == ']')
                s.pop();
            else
            {
                b = false;
                break;
            }
        }
        if (b && s.empty())
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*
YES
YES
NO
NO
NO
NO
YES
YES
YES
NO
YES
YES
YES
YES
NO
YES
YES
YES
YES
NO
NO
NO
YES
YES
YES
YES
NO
YES
NO
NO
NO
NO
YES
NO
NO
NO
YES
NO
YES
NO
NO
YES
NO
NO
NO
YES
YES
NO
YES
YES
YES
NO
YES
NO
YES
NO
NO
YES
NO
YES
YES
NO
YES
NO
YES
YES
NO
NO
NO
NO
YES
YES
YES
YES
NO
YES
NO
YES
YES

YES
YES
NO
NO
NO
NO
YES
YES
YES
NO
YES
YES
YES
YES
NO
NO
YES
YES
YES
NO
NO
NO
YES
YES
YES
YES
NO
YES
NO
NO
NO
NO
YES
NO
NO
NO
YES
NO
YES
NO
NO
YES
NO
NO
NO
YES
YES
NO
YES
YES
YES
NO
YES
NO
YES
NO
NO
YES
NO
YES
YES
NO
YES
NO
YES
YES
NO
NO
NO
NO
YES
YES
YES
YES
NO
YES
NO
YES
YES
*/