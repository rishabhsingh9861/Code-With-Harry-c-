#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream out;
    out.open("read.txt");
    out << "This is me \n";
    out << "This is me also \n";
    out << "This is me Rishabh  ";
    out.close();

    ifstream in;
    string st ;
    in.open("read.txt");
    // in >> st >> st2;
    while (in.eof() == 0)
    {

        getline(in, st);
        cout << st << endl;
    }

   
    in.close();

    return 0;
}