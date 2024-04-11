#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeString(string s)
    {
        stack<int> IntStack;       // Creates an empty stack to store integer values.
        stack<string> StringStack; // Creates an empty stack to store string values.
        int ptr = 0;               // Initializes a pointer ptr to traverse the input string s
        string result = "";        // Initializes an empty string result to store the decoded string.

        while (ptr < s.length())
        {
            char CurrentChar = s.at(ptr);
            if (isdigit(CurrentChar))
            {
                int num = 0; // Initializes a variable num to store the integer value parsed from the string
                while (isdigit(s.at(ptr)))
                {
                    num = num * 10 + (s.at(ptr) - '0');
                    ptr++;
                }
                IntStack.push(num); // Pushes the parsed integer value onto the integer stack.
            }

            else if (CurrentChar == '[')
            {
                StringStack.push(result);
                result = ""; // Resets the result string to an empty string to start decoding the substring inside the square brackets.
                ptr++;
            }

            else if (CurrentChar == ']')
            {
                stringstream ss(StringStack.top());
                StringStack.pop();
                int count = IntStack.top();
                IntStack.pop();

                string temp = result;
                for (int i = 1; i < count; i++)
                {
                    result += temp;
                }
                result = ss.str() + result;
                ptr++;
            }
            else
            {
                result += CurrentChar;
                ptr++;
            }
        }

        return result;
    }
};

int main()
{
    Solution sol;
    string s = "3[a2[c]]";
    string DecodedString = sol.decodeString(s);
    cout << "Decoded String::" << DecodedString << endl;

    return 0;
}