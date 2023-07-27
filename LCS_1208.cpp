#include <bits/stdc++.h>
using namespace std;
const int N = 100;

int dp[N][N];
int lcs(string &s1, string &s2, int n,int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    else if(s1[n-1]==s2[m-1])
    {
        dp[n][m] = 1+lcs(s1,s2,n-1,m-1);
    }
    else
    {
        dp[n][m] = max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
    }

    return dp[n][m];
}

int main()
{     int i,j;
        for(i=0;i<N;i++)
    {
         for(j=0;j<N;j++){
            dp[i][j]=-1;
         }
    }
    string s1,s2;
    cout<<"Enter first string: "<<endl;
    cin>>s1;
    cout<<"Enter second string: :"<<endl;
    cin>>s2;
    int x,y;
    x=s1.size();
    y=s2.size();
    cout<< "Number of longest common subsequence is: "<<lcs(s1,s2,x,y)<<endl;
    return 0;


}
