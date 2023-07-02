#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int impid)
    {
        id = impid;
        salary = 34.0;
    }

    Employee() {}
};

// Derived class
/*
 class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
 {
    class member /methods/etc...

 }

 Note:
 1. Default Visibility mode Private hota hai
 2. Private visibility mode  : Public member of Base class become private member in derived class
 3. Public visibility mode  : Public member of Base class become Public member in derived class
 4. Private Member Can never inherit
 4.
*/

// Creating a Programmer class derived from Employee Base class

class Programmer : public Employee
{
public:
    int languagecode = 9;

    Programmer(int impid)
    {
        id = impid;
    }

    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee rishabh(1), rohit(2);
    cout << rishabh.salary << endl;
    cout << rohit.salary << endl;

    Programmer skillf(12);
    cout << skillf.languagecode << endl;
   //  cout << skillf.id << endl;  // yeh error dega hamne private inherit kiya hai 
   cout << skillf.id << endl;
    skillf.getdata();

    return 0;
}