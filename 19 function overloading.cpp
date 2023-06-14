#include<iostream>
using namespace std;

int add(int a, int b) {
    cout << "\nUsing function 2 argument" << endl;
    return a+b;
}

int add(int a, int b, int c) {
    cout << "\nUsing function 3 argument" << endl;
    return a+b+c;
}

int volume(double r, int h) {
    return(3.14 * r * r * h);
}

int volume(int a) {
    return a * a * a;
}

int volume(int l, int b, int h) {
    return (l*b*h);
}

int main()
{
    cout << " The Sum of 3 and 6 is : " << add(3,6) << endl;

    cout << " The Sum of 3, 6 and 7 is : " << add(3,6,7) << endl;

    cout << " The vloume of 3, 6 and 7 is : " << volume(3,6,7) << endl;

    cout << " The vloume of cuboid of 3, 6 and 7 is : " << volume(3,6,7) << endl;

    cout << " The vloume of cylinder of 3 and 6 is : " << volume(3,6) << endl;



    return 0;
}