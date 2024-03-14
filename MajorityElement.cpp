#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int sz = nums.size();
        int majority;
        int count = 0;

        for (int i = 0; i < sz; i++)
        {
            if (nums[i] == majority)
            {
                count++;
            }
            else if (count == 0)
            {
                majority = nums[i];
                count = 1;
            }
            else
            {
                count--;
            }
        }
        return majority;
    }
};

int main()
{
    Solution answer;
    vector<int> nums = {2, 2, 1, 1, 2, 2, 1};
    int majority_element = answer.majorityElement(nums);
    cout << "Majority element is::" << majority_element << endl;
    return 0;
}