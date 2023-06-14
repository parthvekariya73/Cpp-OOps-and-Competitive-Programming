#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_roll_No(int);
        void get_roll_no(void);
};
void Student :: set_roll_No(int r) {
    roll_no = r;
} 
void Student :: get_roll_no() {
    cout << "The Roll Number is " << roll_no << endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam :: set_marks(float m1,float m2) {
    maths = m1;
    physics = m2;
}
void Exam :: get_marks() {
    cout << "the Maths Marks is " << maths 
    << " and Physics marks is " << physics << endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(void);
};
void Result :: display() {
    get_roll_no();
    get_marks();
    cout << "Your Percentage is " << (maths+physics)/2 <<"%"<< endl;
}

int main()
{

    /*
        if we are inheriting B from A and C form B :- [ A--->B--->C ]
        1. A is the base class for B and B is the Base Class for C
        2. A, B and C is called Inheritance path 
    */

    Result parth;
    parth.set_roll_No(1);
    parth.set_marks(99.90, 99.97);
    parth.display();


    return 0;
}