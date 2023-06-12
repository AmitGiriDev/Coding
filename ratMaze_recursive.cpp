//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
private:
    bool isValid(int x, int y, vector<vector<int>> m, int n, vector<vector<int>> visited)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
            return true;
        else
            return false;
    }
    void solve(int x, int y, string path, vector<vector<int>> m, int n, vector<string> &ans, vector<vector<int>> &visited)
    {
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // down move
        int newx = x + 1;
        int newy = y;
        if (isValid(newx, newy, m, n, visited))
        {
            path.push_back('D');
            solve(newx, newy, path, m, n, ans, visited);
            path.pop_back();
        }

        // left move
        newx = x;
        newy = y - 1;
        if (isValid(newx, newy, m, n, visited))
        {
            path.push_back('L');
            solve(newx, newy, path, m, n, ans, visited);
            path.pop_back();
        }

        // right move
        newx = x;
        newy = y + 1;
        if (isValid(newx, newy, m, n, visited))
        {
            path.push_back('R');
            solve(newx, newy, path, m, n, ans, visited);
            path.pop_back();
        }

        // up move
        newx = x - 1;
        newy = y;
        if (isValid(newx, newy, m, n, visited))
        {
            path.push_back('U');
            solve(newx, newy, path, m, n, ans, visited);
            path.pop_back();
        }
        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        int x = 0;
        int y = 0;
        int a = n;
        int b = m[0].size();
        if (m[0][0] == 0)
            return ans;

        vector<vector<int>> visited(a, vector<int>(b, 0));
        // or
        // for(int i = 0;i<n;i++)
        //   for(int j = 0; j < n; j++)
        //     visited[i][j]=0;

        string path = "";
        solve(x, y, path, m, n, ans, visited);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends