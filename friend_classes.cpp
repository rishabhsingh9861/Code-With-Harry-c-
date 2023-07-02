// #include <iostream>
// using namespace std;

// // forward declaration
// class Complex;

// class Calculator
// {

// public:
//     int sum(int a, int b)
//     {
//         return (a + b);
//     }

//     int sumrealcomplex(Complex, Complex);
//     int sumCompcomplex(Complex, Complex);
// };

// class Complex
// {

//     int a;
//     int b;

//   // individually declaring as a friend
//     // friend int Calculator ::sumrealcomplex(Complex o1, Complex o2);
//     //  friend int Calculator ::sumCompcomplex(Complex o1, Complex o2) ;

//     // alternate :  Declaring the entire calculator class as a friend
//     friend class  Calculator ;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void printNumber()
//     {
//         cout << "your Complex number is " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator ::sumrealcomplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }
// int Calculator ::sumCompcomplex(Complex o1, Complex o2)
// {
//     return (o1.b + o2.b);
// }

// int main()
// {
//     Complex o1, o2;
//     o1.setNumber(40, 6);
//     o2.setNumber(2, 5);

//     Calculator calc;
//     int res = calc.sumrealcomplex(o1, o2);
//     int resc = calc.sumCompcomplex(o1 , o2) ;

//     cout << "Tge sum  of real part is  " << res << endl;
//     cout << "Tge sum  of complex part is  " << resc << "i"<< endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // forward declaration

// class Y;

// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }

//     friend void sum(X, Y);
// };
// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void sum(X, Y);
// };

// void sum(X o1, Y o2)
// {
//     cout << "Summing data of x and y objects gives me " << o1.data + o2.num;
// }

// int main()
// {
//        X a1 ;
//        a1.setValue(5) ;
//        Y a2 ;
//        a2.setValue(8) ;

//       sum(a1 , a2 ) ;

//     return 0;
// }

#include <iostream>
using namespace std;

class c2;

class c1
{
    int val;

public:
    friend void exchange(c1 &, c2 &);
    void indata(int a)
    {
        val = a;
    }

    void display(void)
    {
        cout << val << endl;
    }
};
class c2
{
    int val2;

public:
    friend void exchange(c1 &, c2 &);
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}

int main()
{
  c1 oc1 ;
  oc1.indata(55) ;

  c2 oc2 ;
  oc2.indata(99) ;
  exchange(oc1 , oc2 );

  cout<<"the value of c1 after swapping becomes " ;
  oc1.display() ;
  cout<<"the value of c2 after swapping becomes " ;
  oc2.display() ;
    return 0;
}