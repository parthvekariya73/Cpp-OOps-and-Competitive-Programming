#include<iostream>
#include<fstream>       /* using includeing "fstream" file
                           for working with file in c++
                            1. fstream   --> Base 
                            2. ifstream  --> Derived from base 
                            3. ofstream  --> Derived from base  */
using namespace std;

int main() 
{
    string str = "karma";
    string str2;


    // opening files using constructor and writing it
    ofstream out("60 Semple.txt");     // write operation
    out << str;

    // opening files using constructor and reading it
    // ifstream in("60 Semple.txt");     // Read operation
    // // in >> str2;
    // getline(in, str2);
    // cout << str2 << endl;


    return 0;
}