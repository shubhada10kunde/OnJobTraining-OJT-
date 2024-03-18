#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // unordered_map<int, int> map - s, map - t;
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> count;

        // Count the occurrences of each character in the first string
        for (int i = 0; i < s.length(); ++i)
        {
            char c = s[i];
            count[c]++;
        }

        for (int i = 0; i < t.length(); ++i)
        {
            char c = t[i];
            if (count.find(c) == count.end() || count[c] == 0)
                return false;
            count[c]--;
        }

        return true;
    }
};
// bool isAnagram(string s, string t);
int main()
{
    Solution answer;
    string s = "anagram";
    string t = "nagaram";

    // Check if the strings are anagrams
    if (answer.isAnagram(s, t))
        cout << "given string is an Anagram!";
    else
        cout << "string is Not an anagram.";

    return 0;
}