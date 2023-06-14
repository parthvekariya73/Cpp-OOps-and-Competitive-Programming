#include<iostream>
#include<math.h>
using namespace std;

class complex{
    int a, b;

    public:
    
    complex(int, int);      // parameterized constructor declaration

        void printData() {
            cout << "Your NUmber is " << a << " " << b << endl;
        }  

};

complex :: complex(int x, int y) {
    a = x;
    b = y;
    cout << "Moj karvani ..." << endl;
}

// ............................................................


class input1{
    friend class distance_between_two_point;
    int x1, y1;
    public:
        input1(int a, int b){
            x1 = a;
            y1 = b;
        }
};
class input2{
    friend class distance_between_two_point;
    int x2, y2;
    public:
        input2(int a, int b){
            x2 = a;
            y2 = b;
        }
};
class distance_between_two_point{
    float ans = 0;
    int dist = 0;
    public:
        distance_between_two_point(input1 a, input2 b) {
            int dist1 = b.x2 - a.x1;
            int dist2 = b.y2 - a.y1;
            dist1 *= dist1;
            dist2 *= dist2;
            dist = dist1 + dist2;
            ans = sqrt(dist);
        }
        void display() {
            cout << "answer is " << ans << endl;
        }
};


int main()
{
// 1
    // complex a(10, 20);
// 2
    // complex a = complex(10, 20);

    // a.printData();


    input1 a(1, 0);
    input2 b(20, 0);
    distance_between_two_point point(a, b);
    point.display();


    return 0;
}