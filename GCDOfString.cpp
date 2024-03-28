#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        int sz1 = str1.size();
        int sz2 = str2.size();

        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        return str1.substr(0, gcd(sz1, sz2));
    }
};

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";

    Solution answer;
    string result = answer.gcdOfStrings(str1, str2);
    cout << "GCD of strings is::" << result << endl;
    return 0;
}