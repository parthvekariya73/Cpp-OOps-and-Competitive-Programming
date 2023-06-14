#include<iostream>
using namespace std;

int main()
{
    // pointer --> Data type which holds the address of other data type

    int a=3;
    int *ptr = &a;

    cout << "The Address of A is " << ptr << endl;
    cout << "The Address of A is " << &a << endl;
    // & --> Address of Operater

    cout << "The Value at '*ptr' " << *ptr << endl << endl;
    // * --> (at Value of Operator) Derefence Operator


    // pointer to pointer
    int **p = &ptr;
    cout << "The Address of B is " << &ptr << endl; 
    cout << "The Address of B is " << p << endl;
    cout << "The Address of B is " << *p << endl;
    cout << "The Value of B is " << *ptr << endl;
    cout << "The Value of B is " << **p << endl;


    return 0;
}