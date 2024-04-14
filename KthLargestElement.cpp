#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {

        // using max heap
        priority_queue<int> PQ(nums.begin(), nums.end());
        int ans = 0;
        while (k--)
        {
            ans = PQ.top();
            PQ.pop();
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    Solution sol;
    int result = sol.findKthLargest(nums, k);
    cout << "Kth largest element in the array is::" << result << endl;

    return 0;
}