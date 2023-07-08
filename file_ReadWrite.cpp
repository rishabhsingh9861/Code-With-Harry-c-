#include <iostream>
#include <fstream>
/*
The useful classes for working with files in c++are :
1. fstreambase
2. ifstream  // input fstream   ---> derived from fstreambase
3. ofstream  // output fstream  ---> derived from fstreambase
*/

/*
In order to work with files in c++ , you will have to open it . primarily there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/
using namespace std;

int main()
{
    // Opening file using Constructor

    string st = " Rishabh here hi c++";
    ofstream out("write.txt"); // Write operation
    out << st;

    // Opening files using Constructor and Reading it
    string st2;

    ifstream in("write.txt");
    getline(in, st2);
    cout << st2;
    // ifstream in("abstractClass_pureVirtualFn.cpp"); // READ OPERATION
    //  in >> st2;

    // string cppfile[89];
    // for (int i = 0; i < 89; i++)
    // {

    //     getline(in, st2);
    //     cppfile[i] =st2 ;
    // }

    // for(int i = 0 ; i< 89 ; i++){
    //     cout<<cppfile[i]<<endl ;
    // }

    return 0;
}