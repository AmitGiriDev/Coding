#include <iostream>
using namespace std;

void BubbleSor(int *arr, int len)
{
    if (len == 0 || len == 1)
        return;

    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    BubbleSor(arr, len - 1);
}

int main()
{
    int arr[] = {15, 10, 2, 5, 9};
    BubbleSor(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}