#include<iostream>
using namespace std;
int a[100];
int dp[100][100];
const int MOD=1e7+3;
int mcm(int i,int j)
{
    if(i==j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    dp[i][j]=MOD;
    for(int k=i;k<j;k++)
    {
        dp[i][j]=min(dp[i][j],mcm(i,k)+mcm(k+1,j)+a[i-1]*a[k]*a[j]);
    }
    return dp[i][j];
}

int main()
{
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<100;i++)
    {
        for(int j =0;j<100;j++){
        dp[i][j]=-1;
    }
    }
    cout<<"Minimum number of multiplications is: "<<mcm(1,n-1);

}
