#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int a2, int a3);  // declaration
    void getdata()
    {
        cout << "the number a is " << a << endl;
        cout << "the number b is " << b << endl;
        cout << "the number c is " << c << endl;
        cout << "the number d is " << d << endl;
        cout << "the number e is " << e << endl;
    }
};

void Employee :: setdata(int a1, int a2, int a3)
{
    a = a1;
    b = a2;
    c = a3;
}

int main()
{
    Employee rishabh;
    //    rishabh.a =11;
    //    rishabh.b =12;
    //    rishabh.c = 13;
    rishabh.d = 15;
    rishabh.e = 20;
    rishabh.setdata(11, 12, 13);
    rishabh.getdata();

    return 0;
}