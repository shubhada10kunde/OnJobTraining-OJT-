#include <bits/stdc++.h>
using namespace std;

class SmallestInfiniteSet
{
public:
    int current;
    set<int> s;
    SmallestInfiniteSet()
    {
        current = 1;
    }

    int popSmallest()
    {
        if (!s.empty())
        {
            int res = *s.begin();
            s.erase(res);
            return res;
        }
        else
        {
            int res = current;
            current++;
            return res;
        }
    }

    void addBack(int num)
    {
        if (current > num)
        {
            s.insert(num);
        }
    }
};

int main()
{
    // [ "SmallestInfiniteSet", "addBack", "popSmallest", "popSmallest", "popSmallest", "addBack", "popSmallest", "popSmallest", "popSmallest" ]
    //     [[], [2], [], [], [], [1], [], [], []]

    SmallestInfiniteSet set;

    set.addBack(2);
    cout << set.popSmallest() << endl; // Output: 1
    cout << set.popSmallest() << endl; // Output: 2
    cout << set.popSmallest() << endl; // Output: 3
    set.addBack(1);
    cout << set.popSmallest() << endl; // Output: 1
    cout << set.popSmallest() << endl; // Output: 4
    cout << set.popSmallest() << endl; // Output: 5

    return 0;
}
