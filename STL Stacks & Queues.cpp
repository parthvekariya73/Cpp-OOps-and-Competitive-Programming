#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    stack<int> s;   // LIFO
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop(); 
    }
*/

    queue<int> q;   // FIFO
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop(); 
    }


}