#include <bits/stdc++.h>

using namespace std;

string reverseStr(string s)
{
    int n = s.length();
    // string anst = "";
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        // string temp = "";

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            char tempC = s[i];
            temp.push_back(tempC);
        }
        else if (s[i] == ' ' || i == n)
        {
            reverse(temp.begin(), temp.end());

            temp.push_back(' ');
            // anst = anst + temp;
            // cout << anst;
        }
    }
    // return anst;
    return temp;
}
int main()
{
    string str = "My name is Amit";
    cout << str << endl;
    cout << reverseStr(str);
    return 0;
}