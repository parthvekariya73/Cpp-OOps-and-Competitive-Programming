#include<iostream>
using namespace std;

/*
****************case 1
class B: public A {
    // Order of excution constructor --> first A()constucter call then B()constructer call
}

****************case 2
class A: public B, public C{
    // Order of excution constructor --> first B()constucter call then C()constructer call then A()constructer call
}

****************case 3
class A: public B, virtual public C{
    // Order of excution constructor --> first C() constucter call then B() constructer call then A()constructer call
}

*/

class Base1{
    int Data1;
    public:
        Base1(int i) {
            Data1 = i;
            cout << "Base1 Class Consturcter Called..." << endl;
        }
        void print_Data1(void) {
            cout << "The Value of Data1 is " << Data1 << endl;
        }
};

class Base2{
    int Data2;
    public:
        Base2(int i) {
            Data2 = i;
            cout << "Base2 Class Consturcter Called..." << endl;
        }
        void print_Data2(void) {
            cout << "The Value of Data2 is " << Data2 << endl;
        }
};

class Derived : public Base1, virtual public Base2 {
    int Derived1, Derived2;
    public:
        // Constructer in Derived class
        Derived(int a, int b, int c, int d): Base1(a), Base2(b) {
            Derived1 = c;
            Derived2 = d;
            cout << "Derived class Constructer called..." << endl;
        }
        void print_Data3(){
            print_Data1();
            print_Data2();
            cout << "The Value of Derived1 : " << Derived1 << endl;
            cout << "The Value of Derived2 : " << Derived2 << endl;
        }
};

int main()
{
    Derived parth(1, 2, 3, 4);
    parth.print_Data3();


    return 0;
}