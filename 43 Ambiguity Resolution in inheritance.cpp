#include<iostream>
using namespace std;

class Base1{
    public:
        void greet() {
            cout << "How are you? " << endl;
        }
};
class Base2{
    public:
        void greet() {
            cout << "Kaise ho? " << endl;
        }
};
class Derived : public Base1, public Base2 {
    int a;
    public:
        // Ambiguity Resoultion :
        // Ambiguity in inheritance means same function that complier canfuess function call
        // like Base1 and Base2 class in same function declare then Derived class in call greet() that compiler confuess
        // soulution is declare any one Base class declare
        void greet() {
            Base2::greet();
        }
};


class A{
    public:
        void say() {
            cout << "Hello World" << endl;
        }
};
class B: public A{
    // override base class say() method
    public:
        void say() {
            cout << "Moj Karo..." << endl;
        }
};

int main()
{
// Ambiguity 1 :
    // Base1 base1obj;
    // Base2 base2obj;

    // base1obj.greet(); 
    // base2obj.greet();

    // Derived d;
    // d.greet();

    B b;
    b.say();

    return 0;
}