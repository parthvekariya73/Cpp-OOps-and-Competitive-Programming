#include<bits/stdc++.h>
using namespace std;

template <class T1, class T2>
void print(map<T1,T2> &m) {
    cout << "Size : " << m.size() << endl;
    for(auto &value : m) {
        cout << value.first << " " << value.second << endl;
    }cout << endl;
}

int main()
{
/*
// map is data store in  sorted order 
    map<int, string> m;
    // map insert o(logn)
    m[1] = "abc";
    m[5] = "xyz";
    m[3] = "ghf";
    m[5] = "sdf";
    m.insert({4,"swq"});
    m.erase(3);
    print(m);
    
    auto it = m.find(7);    // o(logn)
    if(it == m.end()) {
        cout << "No Value" << endl;
    }else{
        cout << it->first << " " << it->second << endl;
    }
    m.clear();
*/


    map<string,int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    print(m);

}