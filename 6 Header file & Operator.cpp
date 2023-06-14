//  1. system header file it comes with complier
#include<iostream>

//  2. user defined header files it is written by the programmer
// #include "this.h"

using namespace std;

int main() 
{
    cout << "Operatoers in c++ " << endl;   
    int a = 4, b = 5;
    // 1. Arithmetic operator
        cout << "The Value of A + B is " << a + b << endl;
        cout << "The Value of A - B is " << a - b << endl;
        cout << "The Value of A * B is " << a * b << endl;
        cout << "The Value of A / B is " << a / b << endl;
        cout << "The Value of A % B is " << a % b << endl;
        cout << "The Value of A++ is " << a++ << endl;  // use then increment
        cout << "The Value of A-- is " << a-- << endl;  // use then decrement
        cout << "The Value of ++A is " << ++a << endl;  // increment then use
        cout << "The Value of --A is " << --a << endl;  // decrement then use
        cout << endl << endl;
    // 2. Assigment operator
        // use to assign value to variable
        // A=B, a===b, A!==B, A+=B , A-=B, A*=B, A/=B, A%=B

    // 3. Comparision Operator 
        cout << "The Value of A == B is " << (a==b) << endl;
        cout << "The Value of A < B is " << (a<b) << endl;
        cout << "The Value of A > B is " << (a>b) << endl;
        cout << "The Value of A <= B is " << (a<=b) << endl;
        cout << "The Value of A >= B is " << (a>=b) << endl;
        cout << "The Value of A != B is " << (a!=b) << endl;

    // 4. Logical Operator 
        // &&, ||, !


    return 0;
}