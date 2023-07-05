#include <iostream>
using namespace std;

/*/
Case1.
class B :public A {
    // order of execution of contructor -> first (A) and then (B)
}
Case2.
class C :public B , public A{
    // order of execution of contructor -> first (B) and then (A) and then (C)
}
Case3.
class B :public A , virtual public C{
    // order of execution of contructor -> first (C) and then (A) and then (B)
}



*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class contructor called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "The value of data is" << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class contructor called" << endl;
    }

    void printDataBase2(void)
    {
        cout << "The value of data is" << data2 << endl;
    }
};

class Derived : public Base1, public Base2 // yaha order matter karta hai
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) // yaha pe order matter nhi hota
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of data is" << derived1 << " and " << derived2 << endl;
    }
};

int main()
{
    Derived rishabh(1, 2, 3, 4);
    rishabh.printDataBase1();
    rishabh.printDataBase2();
    rishabh.printDataDerived();
    return 0;
}