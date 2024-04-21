#include <bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word)
{
    int count = 0;
    unordered_map<char, int> m1, m2;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a')
        {
            m1[word[i]] = i;
        }
        else
        {
            if (m2.find(word[i]) == m2.end())
            {
                m2[word[i]] = i;
            }
        }
    }
    for (auto a : m1)
    {
        if (a.second < m2[char(a.first - 32)])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "dcbdDDBCCc";

    cout << numberOfSpecialChars(s);
}
