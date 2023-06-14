    // c++ --> called c with classess by stroustroup
    // structure had limitations --->
    //  members are public
    //  no methods
    // classes --> structure + more
    // classes can have methods and properties
    // classes --> can make access member as privet and public
    /*
    class employee{
        public:
            int x;
    };
    employee x1;
    x1.x = 20;
    cout << x1.x << endl;
    */


#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void ch_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
    ones_complement();
}

void binary ::ch_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary formet " << endl;
            exit(0);
        }
    }
    cout << "it is binary number " << endl;
    display();
}

void binary ::ones_complement()
{
    ch_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    display();
}

void binary ::display()
{
    cout << "Display binary number : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // Nesting of member function :
    binary b;
    b.read();
    // b.ch_bin();          privet function not use in main func but public function call privet function is nesting function view on ones complement function
    // b.display();
    // b.ones_complement();
    // b.display();

    return 0;
}