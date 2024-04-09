#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {

        // for sorting frequency and presence of character
        vector<int> freqW1(26, 0), freqW2(26, 0);
        vector<int> IspresentW1(26, 0), IspresentW2(26, 0);

        for (char c : word1)
        {
            freqW1[c - 'a']++;
            IspresentW1[c - 'a'] = 1;
        }

        for (char c : word2)
        {
            freqW2[c - 'a']++;
            IspresentW2[c - 'a'] = 1;
        }

        sort(freqW1.begin(), freqW1.end());
        sort(freqW2.begin(), freqW2.end());

        return freqW1 == freqW2 && IspresentW1 == IspresentW2;
    }
};

int main()
{
    Solution sol;
    string word1 = "cabbba";
    string word2 = "abbccc";

    bool result = sol.closeStrings(word1, word2);
    cout << "Are the strings close strings? " << (result ? "Yes" : "No") << endl;

    return 0;
}