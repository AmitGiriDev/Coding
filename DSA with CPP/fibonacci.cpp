#include <iostream>
using namespace std;

//uding dp
int fibDP(int n,int dp[]){
    // if(n<0)
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    if(dp[n]!=-1){
        dp[n];
    }
    dp[n] =  fibDP(n-1,dp)+fibDP(n-2,dp);
    return dp[n];
}
//using recurion
int fibRecursion(int n){
    // if(n<0)
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    
    return fibRecursion(n-1) + fibRecursion(n-2);
}
//iterative
int fibIterative(int n,int dp[]){
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}

// optimal
int fibOpt(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i = 2; i <= n; i++){
        c = a+b;
        a = b;
        b = c;
    } 
    return c;
}

int main()
{
    
    int n = 10;
    int dp[n] = {-1};
    cout<< fibOpt(n);
    return 0;
}