#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num{0};
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        multiset<long long> s;
        long long tot{0};
        long long k{0}, n{0}, t{0};
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            s.insert(t);
        }
        for (int j = 0; j < k; j++)
        {
            auto it = --s.end();
            int z = *it;
            tot += *it;
            s.erase(it);
            s.insert(z / 2);
        }
        cout << tot << endl;
    }
}