#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display() {
            cout << "Display Base class Variable var_base " << var_base << endl; 
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display() {
            cout << "Display Base class Variable var_base " << var_base << endl; 
            cout << "Display Derived class Variable var_derived " << var_derived << endl; 
        }
};

int main()
{
    BaseClass *base_class_ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;

// let binding
    base_class_ptr = &obj_derived;  // ponting to base class pointer to derived class

    // base class pointer to point derived class but can not access derived class members and methods
    // [ "BaseClass *base_class_ptr;" ] that because to pointer is base class pointer that can access onlu base class propertites
    base_class_ptr->var_base = 10;  
    base_class_ptr->display();
    // base_class_ptr->var_derived = 1210;   (error)  

    DerivedClass *derived_class_ptr;
    derived_class_ptr = &obj_derived;
    derived_class_ptr->var_base = 98;
    derived_class_ptr->var_derived = 89;
    derived_class_ptr->display();

    return 0;
}