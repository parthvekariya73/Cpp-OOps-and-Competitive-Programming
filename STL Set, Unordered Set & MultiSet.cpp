#include<bits/stdc++.h>
using namespace std;

template <class T>
void print(set<T> &s) {
    for(auto &value : s) {
        cout << value << " ";
    }cout << endl;
}

template <class T>
void print(unordered_set<T> &s) {
    for(auto &value : s) {
        cout << value << " ";
    }cout << endl;
}

template <class T>
void print(multiset<T> &s) {
    for(auto &value : s) {
        cout << value << " ";
    }cout << endl;
}
int main()
{
/*
// in set alwayes store element is sorted order
    set<string> s;
    s.insert("abc");    // O(logn)
    s.insert("xyz");
    s.insert("ghj");
    s.insert("abc"); // unique value can store 
    print(s);

    auto it = s.find("abc");
    if(it != s.end()) {
        s.erase(it);
    }
    // s.erase("abc");
    print(s);
*/

/*
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        s.insert(str);
    }
    print(s);
*/

    // unordered_set<string> s;
    // s.insert("abc");    // O(logn)
    // s.insert("xyz");
    // s.insert("ghj");
    // s.insert("abc"); // unique value can store 
    // // print(s);

    // auto it = s.find("abc");
    // if(it != s.end()) {
    //     s.erase(it);
    // }
    // s.erase("abc");
    // print(s);
/*
    int q;
    cin >> q;
    while(q--) {
        string str;
        cin >> str;
        if(s.find(str) == s.end()) {
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }
*/
    multiset<string> s1;
    s1.insert("abc");   // multiple inculde value
    s1.insert("abc");
    s1.insert("xyz");
    s1.insert("ghj");
    print(s1);
    s1.erase("abc");    // all "abc" delete
    print(s1);
}