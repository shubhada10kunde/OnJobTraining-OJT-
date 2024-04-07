#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int size = nums.size();
        int i = 0;
        int j = 0;
        int ans = 0;
        int ZerosCount = 0;

        while (j < size)
        {
            if (nums[j] == 0)
            {
                ZerosCount++;
            }
            if (ZerosCount > 1)
            {
                while (ZerosCount > 1)
                {
                    if (nums[i] == 0)
                    {
                        ZerosCount--;
                    }
                    i++;
                }
            }
            else
            {
                ans = max(ans, j - i);
            }
            j++;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {0, 1, 1, 1, 0, 1, 1, 0, 1};

    int result = sol.longestSubarray(nums);
    cout << "length of longest subarray::" << result << endl;

    return 0;
}