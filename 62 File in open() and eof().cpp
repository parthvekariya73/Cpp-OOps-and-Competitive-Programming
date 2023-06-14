#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("69 Semple.txt");
    out << "Hare Krishna Hare Ram..";
    out << endl
        << "Har Har Mahadev..";
    out.close();

    ifstream in;
    in.open("60 Semple.txt");
    // in.open("a.out");
    string contant;
    while (in.eof() == 0)
    {
        getline(in, contant);
        cout << contant << endl;
    }
    in.close();

    return 0;
}