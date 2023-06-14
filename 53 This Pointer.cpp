#include<iostream>
using namespace std;

class A{
    int a;
    public :
        A& setData(int a) {
            this -> a  = a;
            return *this;
        }
        void getData() {
            cout << "The Value of A is " << a << endl;
        }
};

int main()
{
    // `this` is a keyword which is a pointer 
    A a;
    a.setData(4);
    a.getData();


    return 0;
}