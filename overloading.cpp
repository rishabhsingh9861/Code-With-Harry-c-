#include <iostream>
using namespace std;


// overloading 

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

int main()
{
    cout << "the sum of 2 and 3 is " << sum(2, 3) << endl;
    cout << "the sum of 2 , 4 and 3 is " << sum(2, 4, 3) << endl;
    cout << "the sum of 2 ,4,5and 3 is " << sum(2, 4, 5, 3) << endl;
    cout << "the sum of 2 ,4,5,6and 3 is " << sum(2, 4, 5, 6, 3) << endl;

    return 0;
}