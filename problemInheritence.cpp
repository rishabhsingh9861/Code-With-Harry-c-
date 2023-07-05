#include <iostream>
#include <math.h>
using namespace std;
/*
 Create 2 classes
 1. Simple calculator  ( take input of two number using a utility function and performs  +,-,*,/)
 2. Scientific calculator (take input of 2 numbers using a utility fn and perfrm any four scientific operation of your choice)
*/

class Calculator
{
protected:
    float num1;
    float num2;

public:
    void getnumber()
    {
     cout<<"Enter the value of a "<<endl ;
     cin>>num1;
     cout<<"Enter the value of b "<<endl ;
         cin>>num2;
    }

    void add()
    {
        cout << "The addition of two number is " << num1 + num2 << endl;
    }
    void multiply()
    {
        cout << "The addition of two number is " << num1 * num2 << endl;
    }
    void subtract()
    {
        cout << "The addition of two number is " << num1 - num2 << endl;
    }
    void division()
    {
        cout << "The addition of two number is " << num1 / num2 << endl;
    }
};

class ScientificCalculator : public Calculator
{
public:
    void logarithmic()
    {
        cout << "The sum of two log input is " << log(num1) + log(num2) << endl;
        cout << "The sum of two log input is " << log(num1) - log(num2) << endl;
        cout << "The sum of two log input is " << log(num1) * log(num2) << endl;
        cout << "The sum of two log input is " << log(num1) / log(num2) << endl;
    }
    void exponential()
    {
        cout << endl
             << "The sum of two exponential input is " << pow(2.71828, num1) + pow(2.71828, num2) << endl;
        cout << "The sum of two exponential input is " << pow(2.71828, num1) - pow(2.71828, num2) << endl;
        cout << "The sum of two exponential input is " << pow(2.71828, num1) * pow(2.71828, num2) << endl;
        cout << "The sum of two exponential input is " << pow(2.71828, num1) / pow(2.71828, num2) << endl;
    }

    void trigo()
    {
        cout << endl
             << "The sum of sin and cos  is " << sin(num1 * (3.14 / 180)) + cos(num2 * (3.14 / 180)) << endl;
        cout << "The sum of sin and cos  is " << sin(num1 * (3.14 / 180)) - cos(num2 * (3.14 / 180)) << endl;
        cout << "The sum of sin and cos  is " << sin(num1 * (3.14 / 180)) * cos(num2 * (3.14 / 180)) << endl;
        cout << "The sum of sin and cos  is " << sin(num1 * (3.14 / 180)) / cos(num2 * (3.14 / 180)) << endl;
    }
};

class Hybrid : public ScientificCalculator
{

public:
    void display()
    {

        add();
        subtract();
        multiply();
        division();
        logarithmic();
        exponential();
        trigo();
    }
};
int main()
{
    Hybrid rishabh;
    rishabh.getnumber();
    rishabh.display();

    return 0;
}