#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a; // this ek pointer hai which points to the object which invokes the member function
    }
    // A & setData(int a)
    // {
    //     this->a = a; // this ka main use hai object ko return krne mai
    //     return *this ;
    // }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    // a.setData(5).getData();
    a.setData(5);
    a.getData();
    return 0;
}