#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3]={{155,24,23},{444,52,606},{40,51,222}};
    int len = sizeof(arr[0])/4;
    for(int i = 0; i< len;i++)
    {
        for(int j = i+1; j< len;j++)
        {
            if(arr[i][1] > arr[j][1])
            swap(arr[i],arr[j]);
        }
    }
    for(int i = 0; i< len;i++)
    {
        for(int j = 0; j< len;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}