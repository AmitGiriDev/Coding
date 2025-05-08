#include <bits/stdc++.h>
using namespace std;

// my basic approach but have some bugs
// class Solution
// {
// public:
//     string removeDuplicates(string s)
//     {
//         int i = 0;
//         int len = s.length();
//         while (i < len)
//         {
//             if (s[i] == s[i + 1])
//             {
//                 s.erase(i, 2);
//                 len = s.length();
//             }
//             else if (s[i] == s[i - 1] && i > 0)
//             {
//                 i = i - 1;
//                 s.erase(i, 2);
//                 len = s.length();
//             }
//             else
//                 i++;
//         }
//         return s;
//     }
// };

// stack approach
class Solution
{
public:
    string removeDuplicates(string s)
    {

        string ans;

        for (int i = 0; i < s.size(); i++)
        {
            if (ans.size() && ans.back() == s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }

        return ans;
    }
};

int main()
{
    string s = "azxxzy";
    Solution obj;
    cout << obj.removeDuplicates(s) << endl;
    cout << s;
    return 0;
}