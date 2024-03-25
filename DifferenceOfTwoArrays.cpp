#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &num1, vector<int> &num2)
    {
        vector<vector<int>> answer(2);
        unordered_set<int> set1(num1.begin(), num1.end());
        unordered_set<int> set2(num2.begin(), num2.end());

        for (auto element : set1)
        {
            if (!set2.count(element))
                answer[0].push_back(element);
        }
        for (auto element : set2)
        {
            if (!set1.count(element))
                answer[1].push_back(element);
        }
        return answer;
    }
};

int main()
{
    vector<int> num1 = {1, 2, 3};
    vector<int> num2 = {2, 4, 6};

    Solution sol;
    vector<vector<int>> result = sol.findDifference(num1, num2);

    cout << "Elements present in num1 but not in num2: ";
    for (int num : result[0])
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Elements present in num2 but not in num1: ";
    for (int num : result[1])
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}