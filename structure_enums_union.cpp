#include <iostream>
using namespace std;

// struct employee
// {
//    int id;
//    char  favchar;
//    float salary;
// };

typedef struct employee // typedef use kiya toh joo mujhe struct employee
                        // likha hu woh likhne ki jarurat nhi hoti hai
{
    int id;
    char favchar;
    float salary;
} ep;

 union money 
{
    int rice;
    char car ;
    float pounds;
} ;

int main()
{
    // union money m1 ;
    // m1.rice = 5 ;
    // m1.pounds =56000;
    // cout<<m1.pounds;

    // ep rishabh;
    // struct employee rohit;
    // struct employee shashank;
    // rohit.favchar = 'j';
    // rishabh.id = 2;
    // rishabh.favchar = 'f';
    // rishabh.salary = 2000000;

    // cout << rishabh.id << endl;
    // cout << rishabh.favchar << endl;
    // cout << rishabh.salary << endl;

    // enum 

    enum meal {breakfast , lunch , dinner};
 meal m1 = lunch ;

 cout<<(m1==2) ;  // false is liye value 0 aa raha hai
 
    return 0;
}