#include <iostream>
using namespace std;

template <class T>
class Parth{
    public:
        T data;
        Parth(T a) {
            data = a;
        }
        void display();
};

template <class T>
void Parth<T> :: display() {
    cout << data << endl;
}

void func(int a) {
    cout << "I am first func() " << a << endl;
}

// overloading templete function
template <class T>
void func(T a) {
    cout << "I am second func() " << a << endl;
}

int main()
{
    // Parth<string> p("parth");
    // cout << p.data << endl;
    // p.display();

    func(10);
    func("parth");


    return 0;
}