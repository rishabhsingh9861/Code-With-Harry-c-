// #include<iostream>
// using namespace std;

// class Complex
// {

//     int a, b ;

// public:

//     Complex(int , int); /// constructor declaration

//     void printNumber()
//     {
//         cout << "your Complex number is " << a << " + " << b << "i" << endl;
//     }
// };
// Complex :: Complex(int x , int y ) //define // This is a default constructo as it Accepts 2  parameter
// {
//     a = x;
//     b = y;
// }

// int main() {
//      Complex a(4,5) ;  // implicit call

//      Complex b = Complex(8,9)  ; // Explicit Call
//      a.printNumber () ;
//      b.printNumber() ;

//      return 0 ;
// }

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is " << x << " and " << y << endl;
    }

    int distance(Point o1, Point o2);
};

int Point ::distance(Point o1, Point o2)
{
    int p = (o1.x - o2.x);
    int s = (o1.y - o2.y);
    int q = 2;
    int sqr1 = pow(p, q);
    int sqr2 = pow(s, q);

    float d = sqrt(sqr1 + sqr2);
    cout << "The distance between points is  " << d << endl;
};

int main()
{

    Point t(1, 0);
    t.displayPoint();

    Point v(70, 0);
    v.displayPoint();

    t.distance(t, v);

    return 0;
}