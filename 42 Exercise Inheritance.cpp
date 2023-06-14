#include<iostream>
#include<math.h>
using namespace std;

/*
1.simple calculator 
2.scientific caluculator
*/

class Simple_Cal{
    protected:
        int ans, op;
        int a, b;
    public:
        void set_Data(void);
        void show_op1(void); 
        void display1(void);
};
void Simple_Cal :: set_Data() {
    cout << "Enter A Value : " ;
    cin >> a;
    cout << "Enter B Value : " ;
    cin >> b;
}
void Simple_Cal :: show_op1() {
    cout << "1. Addition \n2. Substraction\n3. Multiply\n4. Division\n";
    cout << "Choose Option : ";
    cin >> op;
    switch (op)
    {
    case 1:
        ans = a +b;
        break;
    case 2:
        ans = a -b;
        break;
    case 3:
        ans = a *b;
        break;
    case 4:
        ans = a /b;
        break;
    default:
        cout << "Wrong Option Choose..." << endl;
        break;
    }
}
void Simple_Cal :: display1() {
    cout << "Answer is " << ans << endl;
}

class Scientific_Cal {
    protected:
        int ans2, op2;
        int a, b;
    public:
        void set_Data2();
        void show_op2();
        void display2();
};
void Scientific_Cal :: set_Data2() {
     cout << "Enter A Value : " ;
    cin >> a;
    cout << "Enter B Value : " ;
    cin >> b;   
}
void Scientific_Cal :: show_op2() {
    cout << "1. Power\n2. A of Sqrt\n";
    cout << "Choose Option : ";
    cin >> op2;
    switch (op2)
    {
    case 1 :
            ans2 = pow(a,b);
            break;
    case 2:
            ans2 = sqrt(a);
            break;
    case 3:
            ans2 = sqrt(b);
            break;
    case 4:
            ans2 = tan(a);
            break;
    default:
        cout << "Wrong Option Choose..." << endl;
        break;
    }
}
void Scientific_Cal:: display2() {
    cout << "Answer is " << ans2<< endl;
}

class Hybrid : public Simple_Cal, public Scientific_Cal{
    
};

int main()
{
    Hybrid cal;
    cal.set_Data();
    cal.show_op1();
    cal.display1();
    cal.set_Data2();
    cal.show_op2();
    cal.display2();


    return 0;
}