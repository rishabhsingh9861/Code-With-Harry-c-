#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setroll(int);
    void getroll();
};

void Student ::setroll(int a)
{
    roll_number = a;
}
void Student ::getroll()
{
    cout << "The rollnumber of student is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks();
};

void Exam ::setmarks(float p, float m)
{
    maths = m;
    physics = p;
}
void Exam ::getmarks()
{
    cout << "the marks obtained in maths and physics are " << maths << " and " << physics << endl;
}

class Result : public Exam
{

    float percentage;

public:
    void display(void);
};

void Result :: display(void)
{
    getroll();
    getmarks();
    cout << "The percentage obtained are " << (maths + physics) / 2 << "%" << endl;
}

int main()
{ /*
  Notes:
    1. If we are inheriting B from A and C from B : [ A ----> B ----> C ]
    2. A is the base class for B and B is the base class for C
    3. A ----> B ----> C is called Inheritance Path
*/
    Result rishabh;
    rishabh.setroll(123);
    rishabh.setmarks(85.2, 90);
    rishabh.display();
   

    return 0;
}