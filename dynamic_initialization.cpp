#include <iostream>
using namespace std;

class BankDeposit
{

    int principal;
    int years;
    float interestRate;
    int returnValue = 0;

public:
    BankDeposit(){}; // iske binna run hii nhi hota code error deta reason
    // jab ham object bannate tab compiler confuse hoo jata ki konsa constructor use karna hai isliye ek blank constructor use karna
    // hota hainhi toh jab object banate hai ussi samay initialize karna hhoga nhi toh blank constructor

    BankDeposit(int p, int y, float r); // r can be a value of like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value of like 14
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
};
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
};
void BankDeposit ::show()
{
    cout << "Principal amount was Rs  " << principal << " . Return value after " << years << " years is Rs " << returnValue << endl;
};

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the principal amount , years , and rate of intrest" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the principal amount , years , and rate of intrest" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
