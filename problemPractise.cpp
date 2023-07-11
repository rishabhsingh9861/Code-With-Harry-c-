#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class UsernameValidation
{
protected:
    string employeeName;

public:
    void validation(string s)
    {
        if (s.length() < 3)
        {
            int n = s.length();
            cout<<n;
        }
    }
};

// class inherit : public UsernameValidation {

// };

int main()
{

    int a;
    string p;
    cin >> a;
    string array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> p;
        array[i] = p;
    }

    UsernameValidation obj1;

    for (int b = 0; b < a; b++)
    {
        obj1.validation(array[b]);
    }

    return 0;
}