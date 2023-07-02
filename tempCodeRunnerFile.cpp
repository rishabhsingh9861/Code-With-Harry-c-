#include <iostream>
using namespace std;
class Students
{
    int sum;
    int no_stu;
    static int count;
    int sumscores[];

public:
    void stu()
    {
        int p;
        cin >> p;
        no_stu = p;

        sumscores[no_stu];
    }

    void getdata()
    {
        for (int i = 0; i < no_stu; i++)
        {
            int a, b, c, d, e;
            cin >> a;
            cin >> b;
            cin >> c;
            cin >> d;
            cin >> e;
            sum = a + b + c + d + e;
            sumscores[i] = sum;
        }
    }

    void greatest()
    {
        for (int x = 0; x < no_stu; x++)
        {
            int y = x;
            if (sumscores[0] > sumscores[y + 1])
            {
                count++;
            }
        }

        cout << count;
    }
};
int Students ::count;

int main()
{
    Students a;
    a.stu();
    a.getdata();
    a.greatest();
    return 0;
}
