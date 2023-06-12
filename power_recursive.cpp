#include <iostream>
using namespace std;

long long power(int n, int p)
{

    if (p <= 0)
        return 1;

    if (p == 1)
        return n;

    long long ans = power(n, p / 2);

    if (p % 2 == 0)
        return ans * ans;
    else
        return n * ans * ans;
}

int main()
{
    int n = 2;
    int p = 6;
    cout << power(n, p);

    return 0;
}