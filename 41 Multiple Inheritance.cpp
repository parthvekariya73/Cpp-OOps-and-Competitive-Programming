#include<iostream>
using namespace std;

// multiple inheritance synatx :
// class Derived : visibility-mode base1, visibility-mode2

class Base1 {
    protected:
        int base1_int;
    public:
        void set_base1_int(int);
};
void Base1 :: set_base1_int(int a) {
    base1_int = a;
}

class Base2 {
    protected:
        int base2_int;
    public:
        void set_base2_int(int);
};
void Base2 :: set_base2_int(int a) {
    base2_int = a;
}

class Base3 {
    protected:
        int base3_int;
    public:
        void set_base3_int(int);
};
void Base3 :: set_base3_int(int a) {
    base3_int = a;
}

// multiple
class Derived : public Base1, public Base2, public Base3{
    public:
        void show(void);
};
void Derived :: show() {
    cout << "The Value Of Base1 is " << base1_int << endl;
    cout << "The Value Of Base2 is " << base2_int << endl;
    cout << "The Value Of Base3 is " << base3_int << endl;
    cout << "The Sum of these Value is " << base1_int + base2_int + base3_int << endl;
}

int main()
{
    Derived parth;
    parth.set_base1_int(10);
    parth.set_base2_int(20);
    parth.set_base3_int(30);
    parth.show();


    return 0;
}