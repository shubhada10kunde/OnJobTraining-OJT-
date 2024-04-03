#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int i = 0;
        int j = 0;
        int sz = nums.size();
        int CountZeros = 0;
        int ans = INT_MIN;

        while (j < sz)
        {
            if (nums[j] == 0)
            {
                CountZeros++;
            }

            // Adjusting window size
            while (CountZeros > k)
            {
                if (nums[i] == 0)
                {
                    CountZeros--;
                }
                i++;
            }

            // Update the maximum length of subarray
            ans = max(ans, j - i + 1);

            j++; // Move the right pointer
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;

    Solution sol;
    int result = sol.longestOnes(nums, k);
    cout << "The length of the longest subarray is::" << result << endl;

    return 0;
}