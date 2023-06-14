#include<iostream>
using namespace std;

class y;

class x{
    int data;
    public:
        void setData(int value) {
            data = value;
        }
    friend void add(x, y);
};

class y{
    int num;
    public:
        void setData(int value) {
            num = value;
        }
    friend void add(x, y);
};

void add(x o1, y o2) {
    cout << "Data : " << o1.data + o2.num << endl;
}

// ********************************************
class c2;

class c1{
    friend void swapp(c1 &, c2 &);
    int val1;
    public:
        void intData(int a) {
            val1 = a;
        }
        void display() {
            cout << val1 << endl;
        }
};

class c2{
    friend void swapp(c1 &, c2 &);
    int val2;
    public:
        void intData(int a) {
            val2 = a;
        }
        void display() {
            cout << val2 << endl;
        }
};

void swapp(c1 &x, c2 &y) {
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    // x a;
    // y b;
    // a.setData(2);
    // b.setData(5);

    // add(a, b);

    c1 o1;
    c2 o2;
    
    o1.intData(2);
    o2.intData(3);

    cout << "Value Before (o1) exchangeing become : "; 
    o1.display();
    cout << endl;

    cout << "Value Before (o2) exchangeing become : ";
    o2.display();
    cout << endl;

    swapp(o1, o2);
    
    cout << "Value after (o1) exchangeing become : "; 
    o1.display();
    cout << endl;

    cout << "Value after (o2) exchangeing become : ";
    o2.display();
    cout << endl;





    return 0;
}