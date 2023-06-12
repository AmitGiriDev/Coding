#include <iostream>
using namespace std;
int getSum(int *arr, int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];
    int remainingNum = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingNum;
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3};
    cout << getSum(arr, 3);
    return 0;
}