#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // function object :- function wrapped ina  class so that it availble like an object

    int arr[] = { 15, 3, 49, 12, 5, 77};

    sort(arr, arr+6);       // asecnding order sort
    sort(arr, arr+6, greater<int>{});       // desecnding order sort

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;



    return 0;
}