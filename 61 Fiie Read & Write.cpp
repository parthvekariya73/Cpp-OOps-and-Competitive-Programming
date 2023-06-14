#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    // write
    ofstream input("60 Semple.txt");    // open the file writing file
        cout << "Enter your Name :- ";
        string name;
        cin >> name;
    input << "My Name is " + name;  // write a string to the file
    input.close();  // close the file

    
    // read
    ifstream output("60 Semple.txt");
    string contant;
    getline(output, contant);
    cout << "THe Content of this file is :- " << contant << endl;
    output.close();


    return 0;
}