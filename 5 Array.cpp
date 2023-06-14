#include <iostream>
using namespace std;

int largestelementind(int arr[], int n) {
    int max = INT8_MIN;
    int maxindex = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
            maxindex = i;
    }
    return maxindex;
}

int main()
{   

//  1. find the total number of triples in th array whose sum is equal to the given value x.
/*
    int arr[6], n=6, sum=0, cnt=0;
    cout << "Enter Numbers : " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Enter Target Sum : ";
    cin >> sum;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i] + arr[j] + arr[k] == sum)
                    cnt++;
            }
        }
    }
    cout << "Count is " << cnt << endl;
*/

//  2. Array Manipulation
//  find the unique number in a given array where all the elements are being repeated twice with one value being unique
/*
    int arr[7], n=7;
    cout << "Enter Numbers : " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0 )
            cout << "Unique is " << arr[i] << endl;
    }
*/
    
//  3. Find the second largest element in the given array
    int arr[6], n=6;
    cout << "Enter Numbers : " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int indexoflargest = largestelementind(arr, n);
    arr[indexoflargest] = -1;

    int secondlargestele = INT8_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondlargestele)
            secondlargestele = arr[i];
    }


    cout << "second largest element is " << arr[secondlargestele] << endl;

    return 0;
}