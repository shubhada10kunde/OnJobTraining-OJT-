#include <iostream>
using namespace std;
int main()
{
    string s1 = "pqr";
    string s2 = "abc";
    string answer;
    int i = 0, j = 0;
    int StringSize1 = s1.size();
    int StringSize2 = s2.size();

    while (i < StringSize1 || j < StringSize2)
    {
        if (i < StringSize1)
        {
            answer += s1[i++];
        }
        if (j < StringSize2)
        {
            answer += s2[j++];
        }
    }

    cout << "Merged string is:" << answer << endl;

    return 0;
}