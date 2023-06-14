#include <iostream>
#include <list>
using namespace std;

template <class T>
void Display(list<T> &l1) {
    list<int> :: iterator iter = l1.begin(); // point first ele of list
    for (; iter != l1.end(); iter++)
    {
        cout << *iter << " ";       // print iterator with using Derefernce variable
    }cout << endl;
}

int main()
{

    list<int> l1;   // list of zero length
    list<int> l2;    
        l2.push_back(3);
        l2.push_back(5);
        l2.push_back(6);

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    
    // Display(l1);

    l1.pop_back();      // delete ele in front and back side in list
    l1.pop_front();

    l1.push_front(1);      // insert front side in list
    l1.remove(3);   // remove spaecific element in list

    l1.merge(l2);   // merge two linked list 
    l1.sort();      // sorting in list

    l1.reverse();   // reverse list1

    Display(l1);
    

    return 0;
}