#include <iostream>
using namespace std;

template <class T1=int, class T2=string> // default para 
class Parth{
    public:
        T1 a;
        T2 b;
        Parth(T1 x, T2 y) {
            a = x;
            b = y;
        }
        void display() {
            cout << "My Roll no is :- " << a << endl
                << "My Name is :- " << b << endl;
        }
};

int main()
{
    // Parth<> person(1, "parth"); // implement
    // person.display();

    Parth<float, int> p(1.82, 2);
    p.display();    

    return 0;
}