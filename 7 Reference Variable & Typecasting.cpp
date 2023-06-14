#include<iostream>
using namespace std;

int c = 45;

int main()
{
/*
    int a , b, c;
    cout << "Enter The Value of A : ";
    cin >> a;
    cout << "Enter The Value of B : ";
    cin >> b;
    c = a + b;
    cout << "The Sum is : " << c << endl;

    // '::' Scope Resoluation Operater use
    cout << "The Global Variable C is : "<< ::c <<endl;  // print global variable 
*/

// *************************** float & long double Literls : 
/*
    float d = 34.4f;
        // 34.4f in 'f' is float number declear che temp kahevay
        // 'f' & 'F' using function passing value functionality
    long double e = 34.4l;
        // 34.4l in 'l' is long double number declear che temp kahevay
        // 'l' & 'L' using function passing value functionality 
    cout << "The Value of D is " << d << endl << "The Value of E is " << e << endl;
        cout << "\tThe Size of 34.4f is " << sizeof(34.4f) << endl;
        cout << "\tThe Size of 34.4F is " << sizeof(34.4F) << endl;
            // f & F is float = 4 byte output
        cout << "\tThe Size of 34.4l is " << sizeof(34.4l) << endl;
        cout << "\tThe Size of 34.4L is " << sizeof(34.4L) << endl;
            // l & L is long double = 16 byte output
*/

// *************************** Refernce Variable :
    // one person and multiple name like :
        // parth ---> bhaylo ---> gando ---> 50 ---> cute boy
/*
    float x = 445;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
*/

// *************************** TypeCasting :
    // convert one datatype to another datatype
    int a = 45;
    float b = 45.5433;
    cout << "The Value of A is " << (float)a << endl;
    cout << "The Value of A is " << float(a) << endl;
    cout << "The Value of B is " << (int)b << endl;
    cout << "The Value of B is " << int(b) << endl;
    int c = int(b);

    a = 45;
    b = 45.234;
    cout << "\tThe Expression is " << a + b << endl;
    cout << "\tThe Expression is " << a + int(b) << endl;
    cout << "\tThe Expression is " << a + (int)b << endl;
    return 0;
}