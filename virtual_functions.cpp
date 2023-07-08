#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_baseclass = 1;
    virtual void display()
    {
        cout << "1 Displaying base class variable " << var_baseclass << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derivedclass = 2;
    void display()
    {
        cout << "2 Displaying base class variable " << var_baseclass << endl;
        cout << "2 Displaying derined class variable " << var_derivedclass << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}