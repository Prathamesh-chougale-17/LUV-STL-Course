#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string str = "(()())()";
    for (auto &i : str)
    {
        if (i == '(')
            s.push('(');
        else if (i == ')')
            s.pop();
        else
            cout << "NO" << endl;
    }
    cout << "YES" << endl;
    return 0;
}