#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
// int main()
// {

class Solution
{
public:
    // string s1 = "My Name Is Shubhada";
    string reverseWords(string s1)
    {
        // string s1 = "My Name Is Shubhada";
        int sz = s1.size();
        stringstream ss(s1);
        vector<string> ReverseWord;
        string temp;
        while (ss >> temp)
            ReverseWord.push_back(temp);

        string answer;
        for (int i = ReverseWord.size() - 1; i >= 1; i--)
        {
            answer += ReverseWord[i] + " ";
        }
        answer += ReverseWord[0];
        return answer;
    }
};
// string s1 = "My Name Is Shubhada";
// int sz = s1.size();
// stringstream ss(s1);

int main()
{
    string s1 = "My Name Is Shubhada";
    Solution ans;
    cout << ans.reverseWords(s1) << endl;
    return 0;
}
