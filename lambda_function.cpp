#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = [](int x, int y)
    { return x + y; }(2, 5);
    cout << sum << endl;
    vector<int> v = {2, 5, 3, 7, 3, -1, 8};
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl; // if(all are positive return 1 else 0)
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl; // if(any of one is positive return 1 else 0)
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x > 0; })
         << endl; // if(all are negative then return 1 else 0)
}