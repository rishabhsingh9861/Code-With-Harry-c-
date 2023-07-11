#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Rishabh"] = 98;
    marksMap["Rohan"] = 8;
    marksMap["Rohit"] = 95;

    marksMap.insert({{"pankaj", 89}, {"priya", 98}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl; // (*iter).first yeh phele naam (key) and  (*iter).second  yeh value
    }

    cout << "The size is " << marksMap.size() << endl;
    cout << "The max  size is " << marksMap.max_size() << endl;
    cout << "The empty return value  is " << marksMap.empty() << endl;

    return 0;
}