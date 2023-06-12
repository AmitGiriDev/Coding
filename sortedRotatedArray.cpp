#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int binarySearch(vector<int> &arr, int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
            return mid;

        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
            e = mid - 1;

        mid = start + (end - start) / 2;
    }
    return e;
}

int main()
{
    vector<int> a = {7, 9, 1, 2, 3, 4};
    int n = a.size();
    int pivot = getPivot(a, n);
    int k = 3;
    if (k >= a[pivot] && k <= a[n - 1])
        cout << binarySearch(a, pivot, n - 1, k);

    else
        cout << binarySearch(a, 0, pivot - 1, k);

    return 0;
}