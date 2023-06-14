#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){a=0;}; // default constructor no input
        Number(int num) {
            a = num;
        }
        //  when no copy constoctor is found, complier supplies its own copy cons..
        // Number(Number &obj) {
        //     // copy constructor 
        //     cout << "Copy Constuctor call....\n";
        //     a = obj.a;
        // }
        void display() {
            cout << "The Number for this objects is " << a << endl;
        }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();


    // z1 should excetly resemble 
    Number z1(z);
    z1.display();

    z2 = z;
    z2.display();




    return 0;
}