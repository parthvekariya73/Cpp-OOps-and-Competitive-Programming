#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marks;
    marks["parth"] = 99;
    marks["sid"] = 78;
    marks["hitesh"] = 9;
    
    map<string, int> :: iterator iter;

    marks.insert({{"rohan",10}, {"sharad",20}});

    for (iter = marks.begin(); iter != marks.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second << endl;
    }   // .first to print value of first pair(string) and .second to print value of second pair(int)
    
    cout << "size :- " << marks.size() << endl;
    cout << "empty :- " << marks.empty() << endl; 

    


    return 0;
}