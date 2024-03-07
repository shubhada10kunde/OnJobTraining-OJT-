#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                int prev = (i == 0 || flowerbed[i - 1] == 0 ? 0 : 1);
                int next = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) ? 0 : 1;

                if (prev == 0 && next == 0)
                {
                    flowerbed[i] = 1;
                    count++;
                }
            }
            if (count >= n)
            {
                return true;
            }
        }
        return false; // count>=n;
    }
};

int main()
{
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n;
    cout << "Enter value for the n::" << n << endl;
    cin >> n;
    Solution answer;
    cout << "no of flowers can place is::" << (answer.canPlaceFlowers(flowerbed, n) ? "true" : "false") << endl;
    return 0;
}