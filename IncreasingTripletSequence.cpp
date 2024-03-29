#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {

        int size = nums.size();

        if (size < 3)
        {
            return false;
        }
        int left = INT_MAX;
        int mid = INT_MAX;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] > mid)
                return true;

            else if (nums[i] > left && nums[i] < mid)
                mid = nums[i];

            else if (nums[i] < left)
                left = nums[i];
        }
        return false;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 1, 5, 0, 4, 6};
    bool result = solution.increasingTriplet(nums);
    if (result)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}