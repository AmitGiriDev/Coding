#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int n, int l, int e)
{
    if (l >= e)
    {
        return;
    }
    rev(arr, n, l + 1, e - 1);
    swap(arr[l], arr[e]);
    // or
    //  l++;
    //  e--;
    //  rev(arr,n,l,e);

    // or
    // rev(arr, n, ++l, --e);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int l = 0;

    int e = n - 1;
    rev(arr, n, l, e);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}