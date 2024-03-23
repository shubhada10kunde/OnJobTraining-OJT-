#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int altitude = 0;
        int max = 0;
        for (auto a : gain)
        {
            altitude += a;
            if (altitude > max)
                max = altitude;
        }
        return max;
    }
};
int main()
{
    vector<int> gain = {-5, 1, 5, 0, -7};
    Solution answer;
    cout << answer.largestAltitude(gain) << endl;
    return 0;
}