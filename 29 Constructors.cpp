#include<iostream>
using namespace std;

class complex{
    int a, b;
    // constrctor is special member function with same name of classs
    // it is used to initializ the objects of its class
    // it is automatically invoked whenver an object created
    
    public:
    // it should be decalre in public section of class
    // they can not have return type 
    complex(void);      // constructor declaration

        void printData() {
            cout << "Your NUmber is " << a << " " << b << endl;
        }  

};

complex :: complex(void) {
    a = 0;
    b = 0;
    cout << "Moj karvani ..." << endl;
}

// *******************************************

class student{ 
    string name;
    int id;
    public:
        // 1
        // student(string, int);

        // 2
        student(void);
        void display() {
            cout << "Student Name is  : " << name << endl;
            cout << "Student Id is  : " << id << endl;
        }
};

// 1 con
// student :: student(string stuname, int stuid) {
//     name = stuname;
//     id = stuid;
// }

// 2 con
student :: student(void) {
    string stuname;
    int stuid;

    cout << "Enter Student Name : " ;
    cin >> stuname;
    
    cout << "Enter Student Id : " ;
    cin >> stuid;
    
    name = stuname;
    id = stuid;
}




int main()
{
    // complex c;
    // c.printData();


// 1
    // student a("parth",1);
    // a.display();
// 2
    student a;
    a.display();



    return 0;
}