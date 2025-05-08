#include <iostream>
using namespace std;

int f(int n)
{
    if (n <= 1)
    {
        return n;
    }
    // cout << n << endl;

    return f(n - 1) + f(n - 2);
}

int main()
{
    int n = 6;
    // cin >> n;
    cout << f(n);
}