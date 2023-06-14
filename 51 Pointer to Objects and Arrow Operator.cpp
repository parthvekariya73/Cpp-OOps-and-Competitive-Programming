#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData() {
            cout << "The Real part is " << real << endl;
            cout << "The Imaginary part is " << imaginary << endl;
        }
        void setData(int a, int b) {
            real = a;
            imaginary = b;
        }
};

int main()
{
    // Complex c1;

    // Complex *ptr = &c1;
    // (*ptr).setData(1, 14);
    // (*ptr).getData();

    Complex *ptr = new Complex;
// Arrow Operator:  good way
        ptr->setData(2,40);
        ptr->getData();
        delete ptr;


    // Array of Objects:
    // Complex *ptr = new Complex[4];
    // ptr->setData(17,21);
    // ptr->getData();


    return 0;
}