#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        int sum = 0;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            if (i == (sz - 1) || roman[s[i]] >= roman[s[i + 1]])
            {
                sum += roman[s[i]];
                // i++;
            }
            else
            {
                sum += roman[s[i + 1]] - roman[s[i]];
                i++;
            }
        }
        return sum;
    }
};

int main()
{
    string s = "LVIII";
    Solution answer;
    int RomanToIntNum = answer.romanToInt(s);
    cout << "After Conversion roman no " << s << "\tto integer number is::" << RomanToIntNum << endl;

    return 0;
}