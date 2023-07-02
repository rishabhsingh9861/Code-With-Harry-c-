#include <iostream>
using namespace std;

class Simple
{

    int data1, data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printNumber()
    {
        cout << "your Complex number is " << data1 << " + " << data2<< "i" << endl;
    }
};

int main()
{
    Simple s(1, 4);
    s.printNumber();

    Simple s2(4);
    s2.printNumber();
    return 0;
}