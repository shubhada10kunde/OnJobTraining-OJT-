#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int MaxVowels = 0;
        int WindowVowels = 0;

        // creating unordered_set to check if a particular character is a vowel or not
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        // count the number of vowels in the first window
        for (int i = 0; i < k; i++)
            if (vowels.count(s[i]))
                WindowVowels++;

        MaxVowels = WindowVowels;

        // slide the window and update the maximum number of vowels
        for (int i = k; i < s.size(); i++)
        {
            if (vowels.count(s[i - k]))
                WindowVowels--;
            if (vowels.count(s[i]))
                WindowVowels++;
            MaxVowels = max(MaxVowels, WindowVowels);
        }

        return MaxVowels;
    }
};

int main()
{
    string s = "abciiidef";
    int k = 3;

    Solution answer;
    int MaxVowelsCount = answer.maxVowels(s, k);

    cout << "Maximum number of vowels in a substring of length " << k << " is: " << MaxVowelsCount << endl;
    return 0;
}