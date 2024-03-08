#include <iostream>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string string1, string string2)
    {
        // initialize pointers for the both strings
        int i = 0;
        int j = 0;

        while (i < string1.size() && j < string2.size())
        {
            // compare characters and increment both pointers if same
            //  if(s.charAt(i) == t.charAt(j))
            if (string1[i] == string2[j])
            {
                i++;
                j++;
            }
            else
            {
                j++; // only increment the second pointer
            }
        }

        // if its a subsequence , 'i' will have travelled full the length of string s ,so just check and return
        return (i == string1.size());
    }
};

int main()
{
    string string1 = "abc";
    string string2 = "ahbgdc";
    Solution answer;
    // bool ans=answer.isSubsequence(string1 , string2);
    // cout<<""

    bool ans = answer.isSubsequence(string1, string2);
    if (ans)
    {
        cout << "true::"
             << "String1 is a subsequence of String2\t" << endl;
        // return true;
    }
    else
    {
        cout << "false::"
             << "String1 is not a subsequence of String2\t" << endl;
        // return false;
    }

    return 0;
}