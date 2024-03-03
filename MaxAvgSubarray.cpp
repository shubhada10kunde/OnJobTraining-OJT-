#include <iostream>
#include <vector>
// #include <cmath>
// #include <algorithm>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0;

        for (int i = 0; i < k; i++)
            sum += nums[i];

        int MaxSum = sum;

        // sliding window
        int StartIndex = 0;
        int EndIndex = k;

        while (EndIndex < nums.size()) // until end index reaches the end of the array
        {
            sum -= nums[StartIndex]; // remove previous element
            StartIndex++;

            sum += nums[EndIndex]; // add next element
            EndIndex++;

            if (sum > MaxSum)
                MaxSum = sum;
        }
        return (double)MaxSum / k;
    }
};

int main()
{
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    Solution ans;
    double MaxAvg = ans.findMaxAverage(nums, k);
    cout << "Maximum average of subarray of length" << k << "::" << MaxAvg << endl;
    return 0;
}