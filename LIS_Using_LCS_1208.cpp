#include<iostream>
#include<algorithm>
using namespace std;

const int N=100;
int dp[N][N];

void LIS(int a[],int m,int n);
void LCS(int arr[],int brr[],int p);

int main()
{
    int arr[100], brr[100], n,i;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr, brr+n);
    LCS(arr, brr, n);
}

void LIS(int a[],int m,int n)
{
    if(m==0||n==0)
    {
        return;
    }
    if(dp[m][n]==1)
    {
        LIS(a,m-1,n-1);
        cout<<a[m-1]<<" ";
    }
    else if(dp[m][n]==2)
    {
        LIS(a,m-1,n);
    }
    else
    {
        LIS(a,m,n-1);
    }

}

void LCS(int arr[],int brr[],int p)
{
    int sc[100][100],i,j;
    for(i=0;i<p;i++)
    {
        sc[0][i]=sc[i][0]=0;
    }
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=p;j++)
        {
            if(arr[i-1]==brr[j-1])
            {
                sc[i][j]=1+sc[i-1][j-1];
                dp[i][j]=1;
            }
            else if(sc[i-1][j]>=sc[i][j-1])
            {
                sc[i][j]=sc[i-1][j];
                dp[i][j]=2;
            }
            else
            {
                sc[i][j]=sc[i][j-1];
                dp[i][j]=3;
            }
        }
    }
    cout<<"Length of LIS is: "<<sc[p][p]<<endl;
    cout<<"The LIS is: "<<endl;
    LIS(arr, p, p);
}

