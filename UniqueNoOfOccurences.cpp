#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> map;

        for (int &x : arr)
        {
            map[x]++;
        }

        unordered_set<int> set;

        for (auto &it : map)
        {
            if (set.find(it.second) != set.end())
            {
                return false;
            }

            set.insert(it.second);
        }
        return true;
    }
};

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    Solution solution;
    bool result = solution.uniqueOccurrences(arr);

    if (result)
    {
        cout << "Occurrences are unique." << endl;
    }
    else
    {
        cout << "Occurrences are not unique." << endl;
    }

    return 0;
}