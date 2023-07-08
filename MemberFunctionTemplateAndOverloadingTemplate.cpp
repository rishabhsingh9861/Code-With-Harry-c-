#include <iostream>
using namespace std;

template <class T>
class Rishabh
{
public:
    T data;
    Rishabh(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Rishabh<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templasized func() " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << "I am templasized func() " << a << endl;
}

int main()
{
    // Rishabh<float> a(2.5);
    // a.display();

    //  func(5);  // Exact match will take highest priority
    func1(4);

    return 0;
}