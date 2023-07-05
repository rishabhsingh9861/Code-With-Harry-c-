#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a;
    cout << "The value of a is " << *ptr << endl;

    // new operator
    //  int* p = new int(40);
    float *p = new float(40.78);
    cout << "The value of at adrees p  is " << *p << endl;

    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // cout << "The value of arr[0]  is " << arr[0] << endl;
    // cout << "The value of arr[1]  is " << arr[1] << endl;
    // cout << "The value of arr[2]  is " << arr[2] << endl;

    // delete operator
    int *arr = new int[3];
    arr[0] = 10;
    //arr[1] = 20; // we can write this as *(arr+1) =20 ;  this is also correct
    *(arr+1) =20 ; // matlab hai ki jab value of address arr +1 mai 20 dal doo
    arr[2] = 30;
   // delete[] arr ;
    cout << "The value of arr[0]  is " << arr[0] << endl;
    cout << "The value of arr[1]  is " << arr[1] << endl;
    cout << "The value of arr[2]  is " << arr[2] << endl;


    return 0;
}