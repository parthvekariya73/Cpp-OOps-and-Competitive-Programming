#include<bits/stdc++.h>
using namespace std;

int main() {

/* ---> short for loop uses :- */

// vector print
    vector<int> v = {2,3,5,6,7};
    for(int &value : v) {
        cout << value << " ";
    }cout << endl;

// array print
    int arr[] = {1,2,3,4,5};
    for(int &value : arr) {
        cout << value << " ";
    }cout << endl;

// vector pairs print
    vector<pair<int, int>> vp = {{1,2},{2,3},{3,4}};
    // for(pair<int,int> &value : vp) {
    //     cout << value.first << " " << value.second << endl;
    // }
// auto use
    for(auto &value : vp) {
        cout << value.first << " " << value.second << endl;
    }

}