class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int size = chars.size();
        int count = 1;
        string ans;

        for (int i = 1; i <= size; i++)
        {
            if (i < size && chars[i] == chars[i - 1])
            {
                count++;
            }
            else
            {
                if (count == 1)
                {
                    ans.push_back(chars[i - 1]);
                }
                else
                {
                    ans.push_back(char[i - 1]);
                    string c = to_string(count);
                    for (auto ch : c)
                    {
                        ans.push_back((char)ch);
                    }
                    count = 1;
                }
            }
        }
    }
};