#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public :
        void setData(void) {
            cout << "Enter Id : ";
            cin >> id;
            count++;
        }
        void getData(void) {
            cout << "Employee Id is " << id << " ,Employee number count is " << count << endl;
        }
        static void getCount(void) {
            cout << "The Value of Count is " << count << endl;
        }
};

// static data member of class employee
int Employee :: count;  // default value is 0
    
int main()
{
    Employee parth, sid, sharad;
    // parth.id= 1;
    // parth.count = 1;     can not access that privet members

    parth.setData();
    parth.getData();
    Employee :: getCount();

    sharad.setData();
    sharad.getData();
    Employee :: getCount();

    sid.setData();
    sid.getData();
    Employee :: getCount();

    return 0;
}