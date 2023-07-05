#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void setnumber()
    {
        rollNumber = a;
    }

    void printNumber(void)
    {
        cout << "Your Roll nuber is " << rollNumber << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics, chemistry;

public:
    void setmarks(float m, float p, float c)
    {
        maths = m;
        physics = p;
        chemistry = c;
    }

    void printmarks(void)
    {
        cout << "Your result are here :"
             << " MAths : " << maths << endl
             << " Physics : " << physics << endl
             << " Chemistry : " << chemistry
             << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }

    void printscore(void)
    {
        cout << "Your PT score is " << score
             << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + chemistry + score;
        printNumber();
        printmarks();
        printscore();

        cout << "Your toatal score is "
             << total << endl;
    }
};

int main()
{
    Result rishabh;
    rishabh.setnumber(33);
    rishabh.setmarks(90.5, 85, 95);
    rishabh.setscore(75);
    rishabh.display();
    return 0;
}