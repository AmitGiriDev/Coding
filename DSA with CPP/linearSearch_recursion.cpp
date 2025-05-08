#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    cout << "Size of array is " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPresent(int arr[], int size, int target)
{
    print(arr, size);
    if (size == 0)
        return false;
    if (arr[0] == target)
        return true;
    else
    {
        return isPresent(arr + 1, size - 1, target);
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 9};
    cout << isPresent(arr, 6, 9);

    return 0;
}