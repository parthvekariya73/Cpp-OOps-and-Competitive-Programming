#include<iostream>
using namespace std;

// Base Class
// parent class
class employee{
    public:
    int id;
    float salary;
    employee(){};
        employee(int Id){
            id = Id;
            salary = 20;
        };

};

// derived class
// class {derived-class-name} : {visiblity-mode} {base-class-name}
// child class
// default visibility mode is privet
// privet visibility mode :-
        // public member of base class becomes public members
        // public members of base class becomes privet members
// privet member are never inherited

class programmer : public employee {
    public:
    programmer(int Id) {
        id = Id;
    }
    void getdata() {
        cout << id << endl;
    }
    int lang_code = 9;
};

int main()
{
    // employee parth(1), sid(2);
    // cout << parth.salary << endl;
    // cout << sid.salary << endl;

    programmer ak(10);
    ak.getdata();    
    cout << ak.id << endl;

    return 0;
}