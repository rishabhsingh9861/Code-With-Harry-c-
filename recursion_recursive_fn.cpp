#include <iostream>
using namespace std;

// recursion

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }

//     return n * factorial(n - 1);
// }

//  step by step calculation of factorial 4
// factorial(4) = 4*factorial(3) ;
// factorial(4) = 4*3*factorial(2) ;
// factorial(4) = 4*3*2factorial(1) ;
// factorial(4) = 4*3*2*1 ;

// fibonacci seriries

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

// step by step fibonacci series
// fib(5) = fib(5-2) +fib(5-1) =fib(3) + fib(4)
// fib(5) = fib(3-2) +fib(3-1) + fib(4-2) + fib(4-1)  = fib(1) + fib(2) + fib(2) + fib(3) = 1 + fib(2) + fib(2) + fib(3)
// fib(5) = 1 +fib(2-2) + fib(2-1) + fib(2-2) +fib(2-1) + fib(3-2) + fib(3-1) = 1 + fib(0) + fib(1) + fib(0) + fib(1) +fib(1) + fib(2) = 1 +1+1+1+1+1+ fib(2)
// fib(5) = 1 +1+1+1+1+1+ fib(2-2) + fib(2-1) =1+1+1+1+1+1+1+1 =8
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    // cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "The term in the fibonacci series " << a << " is " << fib(a) << endl;
    return 0;
}