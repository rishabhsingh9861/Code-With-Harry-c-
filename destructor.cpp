#include <iostream>
using namespace std;

// Destructor never take value and never return value;
// yeh storage clean karta hai
int count = 0;
class Num
{

public:
    Num()
    {
        count++;
        cout << "This time contructor is called for object number " << count << endl;
    }

    // Destructor banna rahe hai
    ~Num()
    {
        cout << "This is the time when distructor is called " << count << endl;
        count--;
    }
};

int main()
{
cout<<"We are in main function"<<endl;

Num n1 ;
  {
  cout<<"We are entering the block "<<endl;
  cout<<"Creating the three more object"<<endl ;
  Num n2, n3 , n4 ;
  cout<<"Exiting the block"<<endl;

}

cout<<"Return to main"<<endl;
    return 0;
}