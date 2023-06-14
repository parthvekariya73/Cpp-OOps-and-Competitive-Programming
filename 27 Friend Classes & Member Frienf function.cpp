#include<iostream>
using namespace std;

// forword declaration
class complex;

class calculator{
    public:
        int add(int a, int b) {
            return a + b; 
        }
        int sumComplexA(complex,complex);
        int sumComplexB(complex,complex);
};

class complex{
    int a ,b;
    
    // individuall declaring function as friends
// function friend ***************************
    // friend int calculator :: sumComplexA(complex,complex);
    // friend int calculator :: sumComplexB(complex,complex);

// Class friend *******************************
    friend class calculator;

    public:
        void setnum(int s1, int s2) {
            a = s1;
            b = s2;
        }
        void printnum() {
            cout << "Your Number is " << a << " + " << b << "i" << endl;
        }
};

int calculator :: sumComplexA(complex o1, complex o2) {
            return (o1.a + o2.a);
}

int calculator :: sumComplexB(complex o1, complex o2) {
            return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnum(1, 4);
    o2.setnum(5, 4);

    calculator obj;
    int ans = obj.sumComplexA(o1, o2);
    cout << "The sum of o1 and o2 (A) is " << ans << endl;

    ans = obj.sumComplexB(o1, o2);
    cout << "The sum of o1 and o2 (B) is " << ans << endl;


    return 0;
}