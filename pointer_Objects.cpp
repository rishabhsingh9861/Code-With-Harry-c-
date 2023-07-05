#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The real part is " << imaginary << endl;
    }
    void Setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr   = &c1 ;

    Complex *ptr = new Complex ;  // new operator ko use karke ptr object banaya hai
   // (*ptr).Setdata(10 , 5);  // pointer ke through public memeber ko acess kiya
   ptr->Setdata(10 , 5);  // ptr joo hai jis object ko pint kar raha hai uska setdata
   // (*ptr).getdata();  is goo as
   ptr->getdata();
    // c1.Setdata(4, 5);
    // c1.getdata();

    // Array of objects

    Complex *ptr1 = new Complex[4] ; // isse 4 naye object ka array banegaa
    ptr1->Setdata(101 , 51);
     ptr1->getdata();

    return 0;
}