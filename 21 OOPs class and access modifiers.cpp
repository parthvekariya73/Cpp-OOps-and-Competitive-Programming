#include<iostream>
#include<string.h>
using namespace std;

class Employee 
{
    private:
        int a , b, c;

    public:
        int d, e;
        void setData(int a1, int b1, int c1);  // declaration
        void getData(){
            cout << "The Value of A is : " << a << endl;
            cout << "The Value of B is : " << b << endl;
            cout << "The Value of C is : " << c << endl;
            cout << "The Value of D is : " << d << endl;
            cout << "The Value of E is : " << e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}


class Animal
{
private:
    int gender;
public:
    string name;
    int age; 
    void SetData(string name1, int age);
    void getData();
};

void Animal::SetData(string name1, int age)
{
    this->name = name1;
    this->age = age;
}

void Animal::getData()
{
    cout << "Animal Name is : " << name << endl;
    cout << "Animal Age is : " << age << endl;
}

int main()
{
    // Employee parth;
    // parth.d = 4;
    // parth.e = 5; 
    // parth.setData(1, 2, 3);
    // parth.getData();

    Animal Dog;
    Dog.SetData("Rocky",2);
    Dog.getData();



    return 0;
}