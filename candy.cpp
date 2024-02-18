#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> c = {2, 3, 5, 1, 3};
    int ExtraCandies = 3;
    int ArraySize = c.size();
    // int answer;

    int max = c[0];
    for (int i = 1; i < ArraySize; i++)
    {
        if (c[i] > max)
            max = c[i];
    }

    vector<bool> answer(ArraySize, false);
    for (int i = 0; i < ArraySize; i++)
    {
        if (c[i] + ExtraCandies >= max)
        {
            answer[i] = true;
            // answer.push_back(1);
        }
        // else
        //     answer.push_back(0);
    }

    for (int i = 0; i < ArraySize; i++)
    {
        cout << (answer[i] ? "true\t" : "false\t");
    }

    return 0;
};