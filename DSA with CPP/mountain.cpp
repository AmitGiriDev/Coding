#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n)
{
    int count = 0;
    count = *max_element(arr, arr + 4);

    return count;
}
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    cout << solve(arr, 5);

    return 0;
}