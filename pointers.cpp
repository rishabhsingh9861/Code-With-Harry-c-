#include <iostream>
using namespace std;

int main()
{
 int a = 2 ;
  int* b = &a ;  // & adress of operator 

  cout<<b<<endl;
  cout<<*b<<endl;

  // pointer to pointer   it sotore the adress of somt adress
  int**c = &b;
  cout<<"The adress of b is "<<&b<<endl;
  cout<<"The adress of b is "<<c<<endl;
  cout<<"The value at adress of b is "<<*b<<endl;
  cout<<"The value at adress at value at c is "<<**c<<endl;




  return 0;
}