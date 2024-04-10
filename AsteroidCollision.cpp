#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        int size = asteroids.size();
        vector<int> stk;

        for (int &a : asteroids) // or for(int i =0; i < size; i++)
        {
            // when collision can happen?
            while (!stk.empty() && a < 0 && stk.back() > 0)
            {
                int sum = a + stk.back();

                if (sum < 0)
                {
                    stk.pop_back();
                }
                else if (sum > 0)
                {
                    a = 0;
                }
                else
                {
                    // sum==0
                    stk.pop_back();
                    a = 0;
                }
            }
            if (a != 0)
            {
                stk.push_back(a);
            }
        }
        return stk;
    }
};

int main()
{
    Solution sol;
    vector<int> asteroids = {10, 2, -5};

    vector<int> result = sol.asteroidCollision(asteroids);
    cout << "Asteroid after collision is:: ";
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}