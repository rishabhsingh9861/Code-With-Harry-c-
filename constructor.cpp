#include <iostream>
using namespace std;

class Complex
{

    int a, b ;

public:
    // creating a constructor
    // constuctor is a special member function with same name as of the class .
    // It is automatically invoked whenever an object is created
    // it is used to initialize the object of its class

    Complex(void); /// constructor declaration

    void printNumber()
    {
        cout << "your Complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) //define // This is a default constructo ras it does not take parameter
{
    a = 0;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

// propertirs    see page 31 