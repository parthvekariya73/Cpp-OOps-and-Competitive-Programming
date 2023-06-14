#include <bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i]; 
    }
    sort(arr, arr+n);
    print_arr(arr, n);

    // int *ptr = lower_bound(arr, arr+n, 9);  // upper value 
    // if(ptr == (arr+n))
    //     cout << "not found" << endl;
    // else
    // cout << *ptr << endl;

    int *ptr = upper_bound(arr, arr+n, 21); 
    if(ptr == (arr+n))
        cout << "not found" << endl;
    else
    cout << *ptr << endl;

}