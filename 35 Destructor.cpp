#include<iostream>
using namespace std;

int count = 0;
// Destructor never takes any argument not does it return any value
class num{
    public:
        num() {
            count++;
            cout << "Constructor Caled. " << endl << "Object Number : " << count << endl;
        }
        ~num() {
            cout << "~Destuctor Caled. " << endl << "Object Number : " << count << endl;
            count--;
        }
};

class simple{
    public:
        simple() {
            cout << "constructor called.." << endl;
        }
        ~simple() {
        cout << "Destuctor called.." << endl;
        }
};

int main()
{
    // cout << "main function..." << endl;
    // cout << "creating first object" << endl;
    // num n1;
    // {
    //     cout << "\tEntering this block" << endl;
    //     cout << "\tcreating two more objects" << endl;
    //     num n2, n3;
    //     cout << "\texisting this block" << endl;
    // }
    // cout << "back to main..." << endl << endl;


    {
        simple s;
    }



    return 0;
}