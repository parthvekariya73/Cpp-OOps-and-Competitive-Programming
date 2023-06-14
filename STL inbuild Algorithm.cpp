#include <bits/stdc++.h>
using namespace std;

int main()
{

    // --> Inbuld Algo using array and Vectors

    int n = 6;
    int arr[6] = {2,3,1,6,7,6};    

    // Array :-
        int min = *min_element(arr, arr+n);
        cout << min << endl;

        int max = *max_element(arr, arr+n);
        cout << max << endl;
        
        int sum = accumulate(arr, arr+n,0);
        cout << sum << endl;
        
        int ct = count(arr, arr+n, 7);
        cout << ct << endl;
        
        auto it = find(arr, arr+n, 10);
        if(it != arr+n) 
            cout << *it << endl;
        else
            cout << "not found" << endl;
        cout << endl;


    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
    
    // Array :-
        min = *min_element(v.begin(), v.end());
        cout << min << endl;

        max = *max_element(v.begin(), v.end());
        cout << max << endl;

        sum = accumulate(v.begin(), v.end(),0);
        cout << sum << endl;
        
        ct = count(v.begin(), v.end(), 7);
        cout << ct << endl;
        
        auto it2 = find(v.begin(), v.end(), 4);
        if(it2 != v.end()) 
            cout << *it << endl;
        else
            cout << "not found" << endl;

}