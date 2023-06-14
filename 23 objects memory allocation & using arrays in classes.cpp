#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    };
    void setPrice(void);
    void DisplyPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item " << ++counter << " : " << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item : " << endl;
    cin >> itemPrice[counter];
}

void shop ::DisplyPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.DisplyPrice();

    return 0;
}