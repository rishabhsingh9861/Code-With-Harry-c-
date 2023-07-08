#include <iostream>
using namespace std;

// float funcAvg(float a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }
// float funcAvg(int a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

// function template
template <class T1, class T2>

float funcAvg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAvg(4.5, 5);
    cout << "The avg of two number is " << a << endl;
    int x = 10;
    int y = 20;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}