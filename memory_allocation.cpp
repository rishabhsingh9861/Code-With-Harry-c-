#include <iostream>
using namespace std;

class Shop
{  
    
    int itemIds[5];
    int itemPrice[5];
    int counter = 0;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    // void setItems(void);
    void setPrice(void);
    void displayPrice(void);
};

// void Shop ::setItems(void)
// {

//     int itemIds[];
//     int itemPrice[];
//     cout << "Total no. of items" << endl;
//     cin >> itemIds[c];
//     cin >> itemPrice[c];
// }
void Shop ::setPrice(void)
{

    for (counter; counter < 5; counter++)
    {
        cout << "Enter ItemId for Item no. " << counter + 1 << " is" << endl;
        cin >> itemIds[counter];
        cout << "Enter  the price " << endl;
        cin >> itemPrice[counter];
    }
}

void Shop ::displayPrice(void)
{
    for (int b = 1; b <= 5; b++)
    {
        cout << "The price of itemId " << itemIds[b-1] << " is " << itemPrice[b-1] << endl;
    }
}

int main()
{
    Shop rishabh;
    rishabh.setPrice();
    rishabh.displayPrice();

    return 0;
}