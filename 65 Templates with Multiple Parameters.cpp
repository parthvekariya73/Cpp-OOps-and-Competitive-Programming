#include <iostream>
using namespace std;

/*      syntax
multiple parameters
templete<class T1, class T2>
class nameofclass{
    // body
}
*/

// // template<class T1, class T2>
// class myClass{
//     public:
//         T1 data1;
//         T2 data2;
//         myClass(T1 a, T2 b) {
//             data1 = a;
//             data2 = b;
//         }
//         void display() {
//             cout << this->data1 << " " << this->data2 << endl;
//         }
// };

template<class T1, class T2, class T3>
class employee{
    T1 emp_id;
    T2 emp_name;
    T3 emp_ex;
    employee(T1 id, T2 name, T3 experience) {
        emp_id = id;
        emp_name = name;
        emp_ex = experience;
    }
    void display() {
        cout << "Employee Id is :- " << emp_id 
            << "Employee Name is :- " << emp_name 
            << "Employee Experience is :- " << emp_ex << endl;
    }
};

int main()
{
    // myClass<int, string> obj(1,"parth");
    // obj.display();

    // myClass<int, float> obj2(43,63.43);
    // obj2.display();

    employee<int, string, float> emp(1, "parth", 78.28);


    return 0;
}