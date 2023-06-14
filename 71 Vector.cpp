#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    } cout << endl;
}

int main()
{
/*
    int size = 0;
    cout << "Enter the Size of Vector :- ";
    cin >> size;
    vector<int> v;

    for (int i = 0; i < size; i++) {
        int ele = 0;
        cout << " Enter ans element to add to this Vector :- ";
        cin >> ele;
        v.push_back(ele);
    }   
    
    // v.pop_back();

    Display(v);
    
    vector<int> :: iterator iter = v.begin();
    // v.insert(iter, 566);     // first position point
    // v.insert(iter+1, 566);      // second position point
    // v.insert(iter+1, 5, 566);   // s copys insert value
    Display(v);
*/

    // create vector :-
    // vector<int> v1;        // zero length vector
    // vector<string> v2(3);   // 4-element length vector
    // vector<string> v3(v2);  // 4-element length vector
    // vector<int> v4(6, 3);       // 6-element lenght 3s  (3 3 3 3 3 3 3)
    // Display(v4);

    

    return 0;
}