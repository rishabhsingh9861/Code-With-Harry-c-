#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// function prototype
 int sum(int , int);   // acceptable
//  int sum(int a , int b);  // acceptable
//  int sum(int a  , b);  // not acceptable
void p();

int main()
{
    int num1, num2;

    // num 1  and num2   are the actual parametrs
    cout << "Enter the number" << endl;
    cin >> num1;
    cout << "Enter the number" << endl;
    cin >> num2;
    cout << "the sum is" << sum(num1, num2)<<endl;
    p();

    return 0;
}

int sum(int a, int b)
{
    // formal parameters a and b will be taking value from actual pparameters num 1 and num2
    int c = a + b;
    return c;
}

// return karana jarrori nhi hota hai 
void p(){
    cout<<"hello Rishabh";
}