#include <iostream>
using namespace std;

   int product(int a, int b)
{
    // inline fn hai toh static variable nhi banene ka
//    static  int c = 0;  // this execute only once 
//     c = c + 1;   // next time the fn will run , the value of c is retained means joo previous value tha c ka woh hoga
  //  return a * b + c;
}

 
 // default arguments

 float moneyp(int currentmoney , float factor  =  1.4){
    return currentmoney*factor ;
 }
int main()
{
    // int p, q;
    // cout << "Enter the two number" << endl;
    // cin >> p >> q;
    // cout << "Product of two number " << product(p, q) << endl;

    int money = 100000;
    cout<<"the money after one year is "<<moneyp(money)<<endl;  // default argument case
    cout<<"the money after one year is "<<moneyp(money , 1.1)<<endl;  // here we have given the values 
    return 0;
}