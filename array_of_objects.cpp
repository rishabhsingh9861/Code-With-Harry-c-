// #include <iostream>
// using namespace std;

// class Employee
// {

//     int id;
//     int salary;

// public:
//     void setid(void)
//     {
//         salary = 122;
//         cout << "Enter the id of Employee " << endl;
//         cin >> id;
//     }

//     void getid(void)
//     {
//         cout << "The Id this employee is " << id << endl;
//     }
// };

// int main()
// {
//     // Employee rishabh , rohit , shashank  ;
//     // rishabh.setid() ;
//     // rishabh.getid() ;

//     Employee fb[4] ;
//     for (int i = 0 ; i< 4 ; i++) {
//         fb[i].setid() ;
//     fb[i].getid() ;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setdata(int p, int q)
    {
        a = p;
        b = q;
    }

    void sum_of_data(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber(void)
    {
        cout << "the complex no is " << a << " + " << b << "i" << endl;
    }
};

int
main()
{
    Complex c1 , c2 ,c3 ;
    c1.setdata(5,6);
    c1.printnumber();

    c2.setdata(7, 8 );
    c2.printnumber();

    c3.sum_of_data(c1 ,c2 ) ;
    c3.printnumber();

    
    
    return 0;
}