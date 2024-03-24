#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeStars(string s)
    {
        int sz = s.size();
        stack<char> stk;
        for (int i = 0; i < sz; i++)
        {
            if (!stk.empty() && s[i] == '*')
                stk.pop();
            else if (s[i] != '*')
                stk.push(s[i]);
        }
        string answer;

        while (!stk.empty())
        {
            answer += stk.top();
            stk.pop();
        }

        reverse(answer.begin(), answer.end());
        return answer;
    }
};

int main()
{
    Solution sol;
    string s = "leet**cod*e";
    string result = sol.removeStars(s);
    cout << "Result: " << result << endl;
    return 0;
}