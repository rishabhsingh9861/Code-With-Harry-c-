#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Function Objects (Functor): Function wrapped in a class so that it available like a object
    int arr[] = {1, 2, 75, 3, 26, 17, 28};

    // sort method ek object hai aur woh object leter hai
    sort(arr, arr + 7, greater<int>()); // pura element ko sort karna hai toh + jitna element hai  // by default accending hota hai
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}