#include <iostream>
using namespace std;

/*
// CLASS TEMPLATE WITH MULTIPLE PARAMETERS(ONE , TWO OR MORE THAN TWO)
 template<class T1 , class T2  ........(COMMA SEPERATED)>   // we can use class also here we use int float char etc
class nameofclass{
    // body
}

*/

template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;

    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{
    myclass<char, float> obj('d', 50.5856);
    obj.display();

    return 0;
}