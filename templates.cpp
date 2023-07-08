#include <iostream>
using namespace std;
template <class T>
class Vector
{

public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 5;
    // v1.arr[1] = 2;
    // v1.arr[2] = 9;
    // Vector v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 3;
    // v2.arr[2] = 0;
    // int a = v1.dotProduct(v2);
    // cout << a;

    Vector<float> v1(3);
    v1.arr[0] = 5.4;
    v1.arr[1] = 2.6;
    v1.arr[2] = 9.4;
    Vector<float> v2(3);
    v2.arr[0] = 4.8;
    v2.arr[1] = 3.4;
    v2.arr[2] = 0;
    float a = v1.dotProduct(v2);
    cout << a;

    return 0;
}