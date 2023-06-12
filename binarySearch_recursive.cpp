#include <iostream>
using namespace std;

bool binary(int arr[], int s, int l, int k)
{

    if (s > l)
        return false;
    int mid = s + (l - s) / 2;

    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
        return binary(arr, mid + 1, l, k);
    else
        return binary(arr, s, mid - 1, k);
}

int main()
{
    int arr[] = {2, 4, 1, 5, 3, 8};

    cout << binary(arr, 0, 5, 3);

    return 0;
}