#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of the item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    // cin >> size;
    // int size = 2 ;
    // int *ptr = &size ;
    // int *ptr = new int[35];  // compler ko bol raha hu ki 35 ke itni memory store karne ko allo cate kar doo
    // complile r ptr mai phela value dall dega and uske aage ka value increment karke hame dalna hoga

    // general store item , vegies  item , hardware item
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        int p;
        float q;
        cout << " Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        //  (*ptr).setData(p , q);
        (ptr)->setData(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item Number: " << j + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
        
    }

    return 0;
}