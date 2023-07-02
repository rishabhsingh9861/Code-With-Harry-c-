#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int marks[] = {23, 25, 27, 58};
    int mathsmarks[5];
    mathsmarks[0] = 258;
    mathsmarks[1] = 288;
    mathsmarks[2] = 259;
    mathsmarks[3] = 458;
    // cout << mathsmarks[0] << endl;
    // cout << mathsmarks[1] << endl;
    // cout << mathsmarks[2] << endl;
    // cout << mathsmarks[3] << endl;
    cout << "these are marks" << endl;
    marks[2] = 256;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for(int i = 0 ; i<4 ;i++){
    //     cout<<"The value of marks is "<<i<<" is "<<marks[i]<<endl;
    // }

    // while loop

    // while (i<4)
    // {
    //      cout<<"The value of marks is "<<i<<" is "<<marks[i]<<endl;
    //      i++;
    // }

    // by do while loop
    // do
    // {
    //     cout<<"The value of marks is "<<i<<" is "<<marks[i]<<endl;
    //       i++;
    // } while (i<4);

    // Pointer and array
     int *p = marks;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    // cout << "the value of*p is " << *p << endl;
    // cout << "the value of*p+1 is " << *(p + 1) << endl;
    // cout << "the value of*p+2 is " << *(p + 2) << endl;
    // cout << "the value of*p+3 is " << *(p + 3) << endl;

    return 0;
}