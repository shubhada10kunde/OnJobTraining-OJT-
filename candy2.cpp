#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int arraySize = candies.size();
        int max = candies[0];

        // Find the maximum number of candies in the vector
        for (int i = 1; i < arraySize; i++)
        {
            if (candies[i] > max)
                max = candies[i];
        }

        // Initialize a boolean vector to store the result
        vector<bool> result(arraySize, false);

        // Check if each child can have the maximum number of candies with extraCandies
        for (int i = 0; i < arraySize; i++)
        {
            if (candies[i] + extraCandies >= max)
                result[i] = true;
        }

        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    // Call the function from the class and print the result
    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
    for (bool canHaveMaxCandies : result)
    {
        cout << (canHaveMaxCandies ? "true\t" : "false\t");
    }

    return 0;
}
