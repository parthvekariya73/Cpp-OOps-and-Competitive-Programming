#include<iostream>
#include<vector>
using namespace std;

int main()
{
// count occurance
/*
    vector<int> v(6);

    cout << "Enter Elements : ";
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << "Enter Occurence Value : " << endl;
    int x;
    cin >> x;

    int occurance = 0;
    for (int i : v) {
        if(i == x) 
            occurance++;
    }

    cout << "Occurance is " << occurance << endl;
*/


// Count Greter element:
/*
    vector<int> v(6);

    cout << "Enter Elements : ";
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    cout << "Enter Occurence Value : " << endl;
    int x;
    cin >> x;

    int cnt = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > x){
            cnt++;
        }
    }
    cout << "Greater then " << x << " is " << cnt << endl;
*/

// cheack vector sorted or not
/*
    vector <int> v(6);
    cout << "Enter numbers : " << endl;
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }

    bool sorted = true;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= v[i-1]) {
            sorted = false;
        }
    }

    cout << endl << sorted << endl;
*/    

    vector <int> v(6);
    cout << "Enter Numbers : " << endl;
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(i%2==0) 
            sum+=v[i];
        else
            sum-=v[i];
    }
    cout << sum << endl;
    




    return 0;
}