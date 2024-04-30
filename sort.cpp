#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 7, 4, 5, 9, 8};
    // sort first n element
    sort(arr, arr + 4);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    // sort all elements
    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}