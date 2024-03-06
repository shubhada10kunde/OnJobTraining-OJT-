#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int low = 0;
        int high = nums.size() - 1;
        int n = nums.size();
        return findPeakElement(nums, low, high, n);
    }

    int findPeakElement(vector<int> &nums, int low, int high, int n)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || nums[mid - 1] <= nums[mid]) && (mid == n - 1 || nums[mid + 1] <= nums[mid]))
        {
            return mid;
        }
        else if (mid > 0 && nums[mid - 1] > nums[mid])
        {
            return findPeakElement(nums, low, mid - 1, n);
        }
        else
        {
            return findPeakElement(nums, mid + 1, high, n);
        }
    }
};

int main()
{
    Solution answer; // Create an instance of the Solution class
    // int n=nums.size();
    vector<int> nums = {0, 6, 8, 5, 7, 9};
    int n = nums.size();
    cout << "Peak element index::" << answer.findPeakElement(nums, 0, n - 1, n) << endl;
    return 0;
}
