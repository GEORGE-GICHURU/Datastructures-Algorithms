#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    if (binary_search(arr, arr + n, key))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}