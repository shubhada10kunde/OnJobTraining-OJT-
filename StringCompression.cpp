#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int size = chars.size();
        int count = 1;
        int j = 0;

        if (size == 1)
        {
            return 1;
        }

        for (int i = 1; i <= size; i++)
        {
            count = 1;
            if (i < size && chars[i] == chars[i - 1])
            {
                count++;
                i++;
                while (i < size && chars[i] == chars[i - 1])
                {
                    count++;
                    i++;
                }
            }
            chars[j++] = chars[i - 1];
            if (count > 1)
            {
                string c = to_string(count);
                for (auto ch : c)
                {
                    chars[j++] = (char)ch;
                }
            }
        }

        return j;
    }
};

int main()
{
    Solution solution;

    // Example usage:
    vector<char> chars1 = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << "Original vector: ";
    for (char c : chars1)
    {
        cout << c << " ";
    }
    cout << endl;

    int newLength = solution.compress(chars1);
    cout << "Compressed vector: ";
    for (int i = 0; i < newLength; ++i)
    {
        cout << chars1[i] << " ";
    }
    cout << endl;

    // return 0;
}
