#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int sz = s.size();

    stack<char> stk;
    bool answer = true;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!stk.empty() && stk.top() == '(')
            {
                stk.pop();
            }
            else
            {
                answer = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                answer = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (stk.top() == '{')
            {
                stk.pop();
            }
            else
            {
                answer = false;
                break;
            }
        }
    }
    if (!stk.empty())
        return false;
    else
        return answer;
};

int main()
{
    string s = "{([]})";

    if (isValid(s))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "Invalid string" << endl;
    }
}
