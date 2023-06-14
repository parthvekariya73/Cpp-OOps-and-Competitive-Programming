
/*
------> properties of friend function :
    - not in the scope of class
    - it cannot be called from object of that class --> c1.sumComplex() is invaild
    - can be invove without the help of any object
    - usually contains objects as argument
*/

#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
    void setNum(int n1, int n2) {
        a = n1;
        b = n2;
    }

    // ----> friend function to permision to use privet data members
    friend complex sumComplex(complex,complex);  // friend function
    // that sumComplex acces my privet accsse data
    // sumCOmplex not member function

    void printNum() {
        cout << "Your Number is : " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2) {
    complex o3;
    o3.setNum(o1.a + o2.a, o1.b + o2.b);        // friend function can access privet data member
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNum(1, 4);
    c1.printNum();

    c2.setNum(5, 8);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();
    
    return 0;
}