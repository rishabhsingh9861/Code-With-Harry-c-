#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);

    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{

    chk_bin(); //  woh private hai toh class ke mrthods use kar sakte hai issi ko ham nesting of member kehte hai
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Dispalying Binary" << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary rishabh;
    rishabh.read();
    //  rishabh.chk_bin();  // yaha par use nhi kar sakte hai kyu ki woh private hai
    rishabh.ones();
    rishabh.display();
    return 0;
}