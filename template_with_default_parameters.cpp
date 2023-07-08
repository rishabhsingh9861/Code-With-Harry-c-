#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Rishabh
{
public:
    T1 a;
    T2 b;
    T3 c;
    Rishabh(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void dispaly()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    Rishabh<> a(4, 5.25, 'f');
    a.dispaly();
    cout << endl;
    Rishabh<char, int, float> b('e', 58, 20.58);
    b.dispaly();

    return 0;
}