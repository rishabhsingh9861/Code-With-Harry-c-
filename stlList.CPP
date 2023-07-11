#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of zero length

    list1.push_back(5);
    list1.push_back(8);
    list1.push_back(55);
    list1.push_back(8);
    list1.push_back(45);
    list1.push_back(9);

    // list<int>::iterator iter;
    // iter = list1.begin(); // matab list1.begin ka matlab 1st element ko pint kar raha hai
    // cout << *iter << " "; // ham list ke 1st element ki value nikal rahe hai
    // iter++;
    display(list1);

    // REMOVING ELEMENT FROM THE LIST
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(8);  // joo element dalenge uske sare occurence remove hoo jayenge jaise 2 8 hai toh done 8 remove honge isliye dyan rakhe
    // display(list1);

    // // SORTING THE LIST

    // list1.sort();
    // display(list1);

    list<int> list2(4); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 78;
    iter++;
    *iter = 73;
    iter++;
    *iter = 25;
    iter++;
    *iter = 88;
    iter++;
    display(list2);

    // // MERGING THE LIST
    // list1.sort(); // sorting and then merging  and merge list will be sorted
    // list2.sort();
    // list1.merge(list2);
    // cout << "List1 after merging " << endl;
    // display(list1);

    //    // REVERSING THE LIST
    //    list1.reverse();
    //    display(list1);
    //    list2.reverse();
    //    display(list2);

    return 0;
}