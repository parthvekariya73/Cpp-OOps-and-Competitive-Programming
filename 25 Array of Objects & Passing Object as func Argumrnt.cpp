#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setId(void) {
            salary = 122;
            cout << "Enter Id of Employee : " ;
            cin >> id;
        }
        void getId(void) {
            cout << "The Id of Employee is : " << id << endl;
        }
};


class complex {
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }

    void setData_Sum(complex o1, complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printnum() {
        cout << "Your Complex Number is : " << a << " + " << b << " i" << endl;
    }
};


int main()
{
    // Employee parth, sid, sharad, jay;
    // parth.setId();
    // parth.getId();

//      Aray of Objects
    // Employee fb[4];     // many employee on your company that make array of object
    // for (int i = 0; i < 4; i++)
    // {
    //     fb[i].setId();
    //     fb[i].getId();
    // }
    
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printnum();

    c2.setData(3, 4);
    c2.printnum();

    c3.setData_Sum(c1, c2);
    c3.printnum();

    return 0;
}