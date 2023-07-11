#include <iostream>
#include <vector>
using namespace std;

template <class T>
void dispaly(vector<T> &v)
{
    cout << "Displaying this vector" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // ways to create a vector
    // vector<int> vec1;
    // int element;
    // int size = 5;
    // // cout << "Enter the size a vector " << endl;
    // // cin >> size;
    // // for (int i = 0; i < size; i++)
    // // {
    // //     cout << "Enter the element to add ton this vector " << endl;
    // //     cin >> element;
    // //     vec1.push_back(element);
    // // }

    // //   vec1.pop_back();  // last wala element ko hata doo

    // // dispaly(vec1);
    // // vector<int>::iterator iter = vec1.begin();
    // // // vec1.insert(iter + 1, 5, 555); // iter  hai toh 1st elements e phele insert karegaa ;  iter +1 hai 2nd elementse ohele placed karega
    // // //   agar hame  element place karne hai toh comma laga ke  1o likh do
    // // dispaly(vec1);       // zero length integer vector
    // vector<int> vec2(4);     // 4- element int vector vector
    // //  vec2.push_back(10);
    // //  dispaly(vec2);
    // vector<char> vec3(4);    // 4- element char vector vector
    // // vec3.push_back('d');
    // // dispaly(vec3);
    // vector<char> vec4(vec3); // 4 element character  vector from vec2
    // // vec3.push_back('d');
    // // dispaly(vec4);
    vector<int> vec5(6, 12); // 6 element of vector of 12s
    dispaly(vec5);

    return 0;
}