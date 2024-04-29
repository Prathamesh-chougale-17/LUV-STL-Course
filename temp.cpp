#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumAddedInteger(vector<int> &nums1, vector<int> &nums2)
    {
        int min = INT_MAX;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for (auto i : nums1)
        {
            cout << i << " ";
        }
        cout << endl;
        for (auto i : nums2)
        {
            cout << i << " ";
        }
        for (int i = 0; i < 3; i++)
        {
            map<int, int> m1;
            for (auto j = 0; j < nums2.size(); j++)
            {
                m1[nums2[j] - nums1[j + i]]++;
            }
            if (m1.size() == 1)
            {
                for (auto &z : m1)
                {
                    if (z.first < min)
                    {
                        min = z.first;
                    }
                }
            }
        }
        return min;
    }
};
int main()
{
    /*
    [10,2,8,7,5,6,7,10]
[5,8,5,3,8,4]
    */
    Solution s;
    vector<int> nums1 = {10, 2, 8, 7, 5, 6, 7, 10};
    vector<int> nums2 = {5, 8, 5, 3, 8, 4};
    cout << s.minimumAddedInteger(nums1, nums2) << endl;
    return 0;
}