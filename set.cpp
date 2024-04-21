#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "SLDKJFALSKFJA";
    set<char> st;
    for (auto i : s)
    {
        st.insert(i); // O(log(n))
    }
    // find
    auto it = st.find('S'); // O(log(n))
    if (it != st.end())
    {
        st.erase(it);
        // cout << *it << endl;
    }
    for (auto &i : st)
    {
        cout << i << "  ";
    }
    //
    return 0;
}