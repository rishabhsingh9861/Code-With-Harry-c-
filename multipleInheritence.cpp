#include <iostream>
using namespace std;

/*
syntax for mutiple inheritance

class DerivedC : visibility-mode base1 , visibility-mode base2
{
    class bodyof classs "DerivedC"
}
*/

class Base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void get_base2int(int a)
    {
        base2int = a;
    }

};
    class Base3
    {
    protected:
        int base3int;

    public:
        void get_base3int(int a)
        {
            base3int = a;
        }
    };

    class Derived : public Base1, public Base2, public Base3
    {
    public:
        void show()
        {
            cout << "the value of Base1 is " << base1int << endl;
            cout << "the value of Base2 is " << base2int << endl;
            cout << "the value of Base3 is " << base3int << endl;
            cout << "the sum of these  values is " << +base1int + base2int + base3int << endl;
        }
    };

    /*
    The inherited derived class looks like

    Data Members:
       base1int ---> protected
       base2int ---> protected

    Member Functions :
         get_base1int ---> public
         get_base2int ---> public
         show ---> public

    */
    int main()
    {
        Derived rishabh;
        rishabh.get_base1int(25);
        rishabh.get_base2int(20);
        rishabh.get_base3int(10);
        rishabh.show();
        return 0;
    }