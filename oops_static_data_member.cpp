#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // yaha pe count ko chnage nhi kar sakta by defaultb zero hoti hai 

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The employee id is " << id << " and count is " << count << endl;
    }

    static void getcount(void)
    {
    // cout<<id ;  // shoe erroe      yaha pe sirf  static member ko hi le sakte hai
        cout << "the count is " << count << endl;
    }
};

int Employee ::count = 1000; // default value is zero  //  yaha pe change kar sakta hau


int main()
{
    Employee rishabh, rohit, shashank; // yeh 3 no ek hi count variable ko count kar raha hai
    rishabh.setdata();
    rishabh.getdata();
    Employee :: getcount() ;

    rohit.getdata();
    rohit.setdata();
    Employee :: getcount() ;

    shashank.setdata();
    shashank.getdata();
    Employee :: getcount() ;

    return 0;
}