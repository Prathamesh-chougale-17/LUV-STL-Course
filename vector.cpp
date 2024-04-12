#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v)
{
    vector<int>::iterator vec;
    for (auto i : v)
    {
        cout << i << endl;
    }
}
int main()
{
    vector<int> vec;
    int temp{0};
    cin >> temp;
    vec.push_back(temp);
    print_vector(vec);
}