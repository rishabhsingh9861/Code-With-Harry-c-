#include <iostream>
using namespace std;

// we are swapping two  number

// void swap(int a, int b)    // here we cannot swap number
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

//  swapping the number by using pointer reference

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

//  swapping the number by using C++ reference variable

// void swapreferencevar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int & swapreferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a ;
}

int main()
{
    int p, q;
    cout << " Enter the two number " << endl;
    cin >> p >> q;
    //  swap(p , q)  // by this way we  cant swap number soe we haave to pass a adress of a variable and change he valuwe at that adress and from thar we can  swap the number
   // swap(&p, &q);  // by pointer reference
//    swapreferencevar(p,q) ;  // by using reference variable
     swapreferencevar(p,q) = 766;   /// by return by reference 
    cout << " the swap number is " << p << " and " << q << endl;

    return 0;
}
