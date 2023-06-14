#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:

// -------------------> one class in multiple constructer (it is constructer overloading)
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(void)
    {
        a = 0;
        b = 0;
    }
    void printData()
    {
        cout << "Your Number is " << a << " and " << b << endl;
    }
};

int main()
{
    complex c1(4, 5);
    c1.printData();

    complex c2(5);
    c2.printData();

    complex c3;
    c3.printData();

    
    return 0;
}