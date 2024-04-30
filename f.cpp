#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {336, 513, -560, -481, -174, 101, -997, 40, -527, -784, -283, -336, 513, -560, -481, -174, 101, -997, 40, -527, -784, -283, 354};
    sort(nums.begin(), nums.end());
    for (int i = 0; i < (nums.size()) / 2; i++)
    {
        if (nums[2 * i] != nums[2 * i + 1])
            cout << nums[i] << "  ";
    }
    cout << endl;
    for (auto &i : nums)
    {
        cout << i << "  ";
    }
    cout << nums[nums.size() - 1];
}