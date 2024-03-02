#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Define a method to compute the maximum area that can be formed by the containers.
    int maxArea(vector<int> &height)
    {
        // Initialize two pointers, start and end, to track the start and end positions of the containers.
        int start = 0;
        int end = height.size() - 1;
        int area;
        int MaxArea = 0; // Initialize a variable to store the maximum area.

        while (start < end) // Continue iterating until the start pointer is less than the end pointer.
        {
            area = min(height[start], height[end]) * (end - start); // Calculate the area formed by the current container.

            // Update the maximum area if the current area is greater.
            if (area > MaxArea)
            {
                MaxArea = area;
            }
            if (height[start] < height[end])
            {
                start++;
            }
            else
                end--;
        }

        return MaxArea;
    }
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution ans;
    int MaxWater = ans.maxArea(height);
    cout << "maximum amount of water a Container can store is::" << MaxWater << "unit sq." << endl;
    return 0;
}