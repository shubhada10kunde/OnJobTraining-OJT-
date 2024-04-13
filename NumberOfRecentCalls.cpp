#include <bits/stdc++.h>
using namespace std;

class RecentCounter
{
public:
    queue<int> MyQueue;
    RecentCounter()
    {
    }

    int ping(int t)
    {
        MyQueue.push(t);

        while (MyQueue.front() < t - 3000)
        {
            MyQueue.pop();
        }
        return MyQueue.size();
    }
};

int main()
{
    RecentCounter RC;

    cout << RC.ping(1) << endl;
    cout << RC.ping(100) << endl;
    cout << RC.ping(3001) << endl;
    cout << RC.ping(3002) << endl;

    return 0;
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */