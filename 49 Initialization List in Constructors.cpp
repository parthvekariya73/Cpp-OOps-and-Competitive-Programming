#include<iostream>
using namespace std;

/*

synatx for initialization list in constructor :-
    constructor (argument-list) : initilization-section {
        // code
    }

*/

class Test{
    int a;
    int b;
    public:
    // initialization list in constructor
        // Test(int i, int j) : a(i), b(j) 
        // Test (int i, int j): a(i) , b(i+j)
        // Test(int i, int j) : a(i), b(a*j) 
        Test(int i, int j) : b(j), a(i+b) {
            cout << "Constructor called..." << endl;
            cout << "Value of A is " << a << endl;
            cout << "Value of B is " << b << endl;
        }
};

int main()
{

    Test t(4, 6);

    return 0;
}