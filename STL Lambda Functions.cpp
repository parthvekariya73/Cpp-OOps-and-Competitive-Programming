#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << [](int x){return x+2;}(4) << endl;

    auto sum = [](int a,int b){return a+b;}(10,20);
    cout << "SUm is "  << sum << endl;

    vector<int> v = {2,3,5};

    // if all element is positive or not in using Lambda Function
    cout << all_of(v.begin(), v.end(), 
            [](int x){return x>0;}) << endl;        // true

    // if any element is positive or not
    cout << any_of(v.begin(), v.end(), 
            [](int x){return x>0;}) << endl;        // true

    // if none of element is positive or not
    cout << none_of(v.begin(), v.end(), 
            [](int x){return x>0;}) << endl;        // false
    

}