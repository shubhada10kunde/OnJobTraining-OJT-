#include <iostream>
using namespace std;
int main()
{
    string s = "Hello World";
    int sz = s.size();
    string answer;
    for (int i = sz - 1; i >= 0; i--)
    {
        answer += s[i];
    }
    cout << "reversed string is::" << answer << endl;
    return 0;
}
