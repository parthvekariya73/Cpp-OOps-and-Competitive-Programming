#include <iostream>
using namespace std;

// float funcAverage(int a, int b) {
//     float avg = (a + b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b) {
//     float avg = (a + b)/2.0;
//     return avg;
// }

        //  function template :-
template <class T1, class T2>
float funcAverage(T1 a, T2 b) {
    float avg = (a + b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // float a = funcAverage(5, 2);
    // printf("Average :- %f\n",a);

    // string x = "parth";
    // string y = "it";
    int x = 1, y = 2;
    swapp(x, y);
    cout << x << " " << y << endl;

    return 0;
}