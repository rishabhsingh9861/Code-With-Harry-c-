#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kaise hoo ? " << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2 ::greet();
        Base1 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Heloo" << endl;
    }
};
class D : public B
{

    // D's new say()  method will overide base class says() method
public:
    void say()
    {
        cout << "Rishabh" << endl;
    }
};

int main()
{
    // ambiquity eq 1
    // Derived rishabh;
    // rishabh.greet();

    // ambiquity 2

    B b;
    b.say();
    /// yaha pe compiler khud hi ambiquity resolve khud kar lega
    D d;
    d.say();
    return 0;
}