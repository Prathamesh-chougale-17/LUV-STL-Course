#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
bool cmpp(std::pair<int, int> a, std::pair<int, int> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

int main()
{
    /*
    int arr[] = {3, 5, 1, 6, 7, 6};
    std::sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    for (auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    // use of comparitor
    // std::sort(arr, arr + sizeof(arr) / sizeof(arr[0]),comparator);
    std::sort(arr, arr + sizeof(arr) / sizeof(arr[0]), cmp);
    for (auto i : arr)
        std::cout << i << " ";
    std::cout << std::endl;
    */
    std::pair<int, int> p[] = {{1, 3}, {5, 2}, {5, 7}};
    sort(p, p + sizeof(p) / sizeof(p[0]));
    for (auto &i : p)
        cout << i.first << " " << i.second << endl;
    cout << endl;
    sort(p, p + sizeof(p) / sizeof(p[0]), cmpp);
    for (auto &i : p)
        cout << i.first << " " << i.second << endl;
}