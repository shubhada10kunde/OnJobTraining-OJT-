#include <iostream>
#include <vector>
#include <numeric>
// #include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivoteIndex(vector<int> &nums)
    {
        int sz = nums.size();

        int RightSum = accumulate(nums.begin(), nums.end(), 0);
        int LeftSum = 0;

        for (int i = 0; i < sz; ++i)
        {
            RightSum = RightSum - nums[i];
            if (RightSum == LeftSum)
                return i;
            LeftSum += nums[i];
        }
        return -1; // Return -1 if no pivot index found
    }
};

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    Solution answer;
    int pivotIndex = answer.pivoteIndex(nums);
    if (pivotIndex != -1)
    {
        cout << "Pivot index is::" << pivotIndex << endl;
    }
    else
    {
        cout << "No pivot index found::" << endl;
    }

    return 0;
}