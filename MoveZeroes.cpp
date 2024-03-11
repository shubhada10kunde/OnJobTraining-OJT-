#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int sz = nums.size();
        int count = 0;

        for (int i = 0; i < sz; i++)
        {
            if (nums[i] != 0)
            {
                nums[count++] = nums[i];
            }
        }

        while (count < sz)
        {
            nums[count++] = 0;
        }
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution answer;
    answer.moveZeroes(nums);
    cout << "Array after moving zeroes::" << endl;
    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
