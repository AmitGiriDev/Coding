#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int i = s - 1;
    int pivot = arr[e];
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[e], arr[i + 1]);
    return i + 1;
}

void quickSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

void print(vector<int> &arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {10, 2, 5, 8, 1, 4};
    int len = arr.size();
    quickSort(arr, 0, len - 1);
    print(arr, len);
    return 0;
}