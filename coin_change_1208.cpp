#include<iostream>
using namespace std;

int minCoin(int a[],int n,int dp[])
{
        if(n==0)
        {
            return 0;
        }
        int ans=INT_MAX;
        int subAns=0;
        int s=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<s;i++)
        {
            if(n-a[i]>=0)
            {
                if(dp[n-a[i]]!=-1)
                {
                    subAns=dp[n-a[i]];
                }
                else{
                    subAns=minCoin(a,n-a[i],dp);
                }

            }
            if(subAns+1<ans)
            {
                ans=subAns+1;
            }
        }
         return dp[n]=ans;
}

int main()
{
    int a[20];
    int n,i,x;
    int dp[50];
    for(i=0;i<50;i++)
    {
        dp[i]=-1;
    }
    dp[0]=0;
    cout<<"Enter total money: "<<endl;
    cin>>n;
    cout<<"Enter number of coins: "<<endl;
    cin>>x;
    cout<<"Enter coins: "<<endl;
    for(i=0;i<x;i++)
    {
        cin>>a[i];
    }
    int lab=minCoin(a,n,dp);
    cout<<"Minimum number of coin required: "<<lab;

}
