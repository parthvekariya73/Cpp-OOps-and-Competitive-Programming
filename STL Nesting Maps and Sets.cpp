#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
    map<pair<int,int>, int> m;
    pair<int,int> p1, p2;
    p1 = {1,2};
    p2 = {2,3};
    cout << (p1 < p2) << endl;
*/
/*
    map<set<int>,int> m1;
    set<int> s1 = {1,2,3};
    set<int> s2 = {2,3};
    cout << (s1 < s2) << endl;
*/

/*
    map<pair<string,string>,vector<int> > m;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for(int j=0; j<ct; ++j) {
            int x;
            cin >> x;
            m[{fn,ln}].push_back(x);
        }
    }

    for(auto &pr : m) {
        auto &fn = pr.first;
        auto &list = pr.second;
        cout << fn.first << " " << fn.second << endl;
        cout << "Size :" << list.size() << endl;
        for(auto &element : list) {
            cout << element << " ";
        }cout << endl << endl;
    }
*/ 

/*
    map<pair<string,string>,vector<int> > m;
    cout << "Enter Total Student : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << endl << "Student " << (i+1) << " : " << endl;
        string fn, ln;
        cout << "Enter First Name : ";
        cin >> fn;
        cout << "Enter Last Name : ";
        cin >> ln;
        for(int j=0; j<4; ++j) {
            cout << "\tEnter " << (j+1) << " Subject Marks : ";
            int x;
            cin >> x;
            m[{fn,ln}].push_back(x);
        }
    }cout << endl;

    int i=1;
    for(auto &pr : m) {
        auto &fn = pr.first;
        auto &list = pr.second;
        cout << (i++) << ": Name is " << fn.first << " " << fn.second << endl;
        // cout << "Size :" << list.size() << endl;
        cout << "Marks : " << endl;
        for(auto &element : list) {
            cout << element << " ";
        }cout << endl << endl;
    }
*/

    map<int, multiset<string> > m;
    int n;
    cin >>n;
    for(int i=0; i<n; ++i) {
        int marks;
        string name;
        cin >> name >> marks;
        m[marks].insert(name);
    }cout << endl;

    auto curr_it = --m.end();
    while(true) {
        auto stud = curr_it->second;
        int marks = curr_it->first;
        for(auto student : stud) {
            cout << student << " " << marks << endl;
        }
        if(curr_it == m.begin()) break;
        curr_it--;
    }
}