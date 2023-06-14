#include<iostream>
using namespace std;

class Base{
    int data1; // privet by default and it is not inheritance
    public:
        int data2;
        void setdata();
        int getData1();
};
void Base::setdata(void) {
    data1 = 10;
    data2 = 20;
}
int Base::getData1() {
    return data1;
}

class Derived :  Base{
    // class is being derived default public
    int data3;
    public:
        void process();
        void display();
};
void Derived::process() {
    setdata();
    data3 = data2 * getData1();
}
void Derived :: display() {
    cout << "Value of Data1 is " << getData1() << endl;
    cout << "value of Data2 is " << data2 << endl;
    cout << "value of Data3 is " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setdata();
    der.process();
    der.display();


    return 0;
}