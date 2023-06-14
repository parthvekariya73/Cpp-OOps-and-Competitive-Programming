#include <iostream>
using namespace std;

// virtual base class 
/* inheritance
           ------- student ------
           |                    |
           |                    |
          Test                Sports
           |                    |
           |                    |
           ------>---------<-----
                       |            // Ambigultity resolve
                     Result

    student --> test
    student --> sport
    test and sport --> result
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_rollno(int a) {
            roll_no = a;
        }
        void print_rollno() {
            cout << "You Roll Number is " << roll_no << endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physic;
    public:
        void set_marks(float a, float b) {
            maths = a;
            physic = b;
        }
        void print_marks() {
            cout << "You Result is : " << endl
                << " Maths : " << maths << endl
                << " Physics : " << physic << endl;
        }
}; 

class Sport : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float a) {
            score = a;
        }
        void print_score() {
            cout << "You PT Result is : " << endl
                << " Score : " << score << endl;
        }
}; 

class Result : public Test, public Sport {
    private:
        float total;
    public:
        void Display(void) {
            total = maths + physic + score; 
            print_rollno();
            print_marks();
            print_score();
            cout << "Total Marks is " << total << endl;
        }
};

int main()
{
    Result parth;
    parth.set_rollno(1);
    parth.set_marks(88.8, 84.2);
    parth.set_score(9);
    parth.Display();



    return 0;
}