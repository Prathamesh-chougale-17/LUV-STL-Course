#include <bits/stdc++.h>
using namespace std;

int numberOfSpecialChars(string word)
{
    bool valid = true;
    map<char, int> ms;
    vector<char> hit;
    int count{0};
    for (int i : word)
    {
        if (i > 96)
            ms[i]++;
        for (auto &j : ms)
        {
            if (j.first - i == 32 && j.second > 0)
            {
                count++;
                j.second--;
                hit.push_back(j.first);
            }
        }
    }
    for (auto &i : hit)
    {
        for (auto j : word)
        {
            if (i == j)
            {
                valid = false;
            }
            else if (i == j + 32)
            {
                valid = true;
            }
        }
        if (!valid)
        {
            count--;
        }
    }
    return count;
}
int main()
{
    string s = "dcbCC";
    cout << numberOfSpecialChars(s);
}