#include <iostream>
using namespace std;

/*
Synatx for initialazation list in constructor :
constructor(argument-list) : initialization section
{
    assignment + other code ;
}


};
*/

class Text
{
    // int a;     // joo phele declare hoti hai woh phele initialize hoti hai
    // int b;

    int b ;
    int a ;
                     
    public :
     // Text(int i , int j) : a(i) , b(j)
     // Text(int i , int j) : a(i) , b(i+j)
     // Text(int i , int j) : a(i) , b(2*j)
     // Text(int i , int j) : a(i) , b(a+j)
     // Text(int i , int j) : b(j) , a(b+ i) --> RED FLAG  this will create problem because a will initialized first
 Text(int i , int j) : b(j) , a(b+i)


      {
        cout<<"Constructor body"<<endl;
        cout<<"The value of a  is "<< a <<endl;
        cout<<"The value of b  is "<< b <<endl;
      }
};
int main()
{
  Text t(5,6);
    return 0;
}