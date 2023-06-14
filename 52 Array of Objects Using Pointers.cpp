#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b) {
            id = a;
            price = b;
        }
        void getData() {
            cout << "Code of this Item id is " << id << endl;
            cout << "Code of this Item price is " << price << endl;
        }
};

int main()
{

    int size = 3;
    int p;
    float q;

    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Id and Price of item " << i+1 << endl;
        cin >> p >> q;
        ptr->setData(p,q);
        ptr++;
    }
    
    ptr = ptrtemp;
    for (int i = 0; i < size; i++)
    {
        cout << "Item Number : " << i+1 << endl;
        ptr->getData();
        ptr++;
    }
    
    

    return 0;
}