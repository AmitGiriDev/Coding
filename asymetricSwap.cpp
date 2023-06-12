#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int len = 2 * n;
        int *arr1 = new int[len];
        int *arr2 = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        for (int i = n, j = 0; i < len; i++, j--)
            arr1[i] = arr2[j];

        sort(arr1, arr1 + len);
        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";
        // int min = arr1[len-1] - arr1[0];
        // cout<<min<<endl;
    }
    return 0;
}
