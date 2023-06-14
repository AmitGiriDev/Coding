#include <iostream>
using namespace std;

int findOPt(int n,int dp[]){
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] =  findOPt(n-1,dp)+(n-1)*findOPt(n-2,dp);
    return dp[n];
}

int main()
{
    
    int n = 3;
    int dp[n+1];
    
    for(int i=0;i<=n;i++) dp[i] = -1;
    cout<< findOPt(n,dp);
    return 0;
}