#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base ::setdata()
{
    data1 = 10;
    data2 = 100;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2(void)
{
    return data2;
}

class Derived : private Base
{ // class has been derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setdata(); // derived  ke andar derived ke private data ko call kiya hai
    data3 = data2 * getdata1();
}
void Derived ::display()
{
    cout << "value of data 1 is " << getdata1() << endl; // data1 ko directlyb acess nhi kars akte hai kyu ki woh private hai isliye method se call kiya hai usse acess karne ke liye
    cout << "value of data 2 is " << data2 << endl;
    cout << "value of data 3 is " << data3 << endl;
};

int main()
{
    Derived der;
    // der.setdata();  //yaha call nhi kar sakta becoz setdata mera privae hai derived class mai isliye usse within function call kar sakta huu
    der.process();
    der.display();

    return 0;
}