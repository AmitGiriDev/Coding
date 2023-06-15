#include <iostream>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if (n == 0)
        return;
    toh(n - 1, a, c, b);
    cout << "moving disk " << n << " from " << a << " to " << b << endl;
    toh(n - 1, c, b, a);
}

int tohCount(int n)
{
    if (n == 0)
        return 0;
    return 2 * tohCount(n - 1) + 1;
}

// toh optimal in constant time

int tohOptimal(int n)
{
    return (1 << n) - 1;
}

int main()
{
    int n = 3;
    // toh(n, 'A', 'C', 'B');
    // cout << tohCount(n);
    cout << tohOptimal(n);
    return 0;
}