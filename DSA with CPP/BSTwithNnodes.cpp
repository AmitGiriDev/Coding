#include <iostream>
using namespace std;
// using recursion
int countBST(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = countBST(i - 1);
        int y = countBST(n - i);
        ans += x * y;
    }
    return ans;
}

// using dp
int countBSTdp(int n, int dp[])
{
    if (n == 0 || n == 1)
        return 1;

    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i - 1] = countBSTdp(i - 1, dp);
        dp[n - i] = countBSTdp(n - i, dp);
        ans += dp[n - i] * dp[i - 1];
    }
    return ans;
}

// bottom up approach
int bottomUpBSTcount(int n, int dp[])
{
    dp[0] = dp[1] = 1;
    // cout << sizeof(dp);
    for (int i = 2; i <= n; i++)
    {
        int ans = 0;
        for (int j = 1; j <= i; j++)
        {
            ans += dp[i - j] * dp[j - 1];
        }
        dp[i] = ans;
    }
    return dp[n];
}

int main()
{
    int n = 4;
    int dp[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    // cout << sizeof(dp);
    // int arr[n];
    cout << bottomUpBSTcount(n, dp);

    return 0;
}