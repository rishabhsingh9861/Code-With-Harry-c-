#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting a file with hout stream
    ofstream hout("read.txt"); // write in the file
    // creating a name stream and filling it with the string entered by the user
    cout << "Enter Your Name" << endl;
    string name;
    cin >> name;

    // Writing a string to the file
    hout << "My name is " + name;

    hout.close();

    ifstream hin("read.txt");
    string content;
    // hin >> content;
    getline(hin, content);
    cout << "The content of this file is: " << content << endl;
    hin.close();

    return 0;
}