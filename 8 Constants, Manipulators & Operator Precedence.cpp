#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
/*
    int a = 34;
    cout << "THe Value of A was : " << a << endl;
    a = 45;
    cout << "THe Value of A is : " << a << endl;
*/

// **************** Constants :
/*
    const int a = 3;
    cout << "THe Value of A was : " << a << endl;
    // 'const' => do not change Value
    a = 45;     // error
    cout << "The Value of A is : " << a << endl;
*/

// ***************** Manipulators :
    // 1. endl :--> next line to move cursor
    // 2. setw() :--> using set space with  #include<iomanip>
/*
    int a = 3, b = 78, c = 234;
    cout << "Without using setw() :- " << endl;
        cout << "\tThe Value of A is " << a << endl;
        cout << "\tThe Value of B is " << b << endl;
        cout << "\tThe Value of C is " << c << endl;
    cout << "With using setw() :- " << endl;
        cout << "\tThe Value of A is " << setw(3) << a << endl;
        cout << "\tThe Value of B is " << setw(3) << b << endl;
        cout << "\tThe Value of C is " << setw(3) << c << endl;
*/

// ****************** Operator Precedence :
    // 1. multification
    // 2. division
    // 3. addition
    // 4. subtraction
    int a = 3 , b = 4;
    int c = (((a*5)/b)+45)-87;
    cout << "The Value if c is " << c << endl;




    return 0;
}