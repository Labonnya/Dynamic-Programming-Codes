#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int c[100][100],a[100][100],n,m,i,j;;

void printBest(int i,int j);

int main()
{
    cout<<"Enter row and column value: "<<endl;
    cin>>n>>m;
    cout<<"Enter elements: "<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>c[i][j];
        }
    }
    for(i=1;i<m;i++){
        a[0][i]=0;
}

    for(i=0;i<=n+1;i++){
        a[i][0]=a[i][m+1]=INT_MAX;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        {
            if(i==1)
                a[i][j]=c[i][j];
            else
                a[i][j]=c[i][j]+min(min(a[i-1][j-1],a[i-1][j]),a[i-1][j+1]);
        }
    }

    int k[100];

    for(i=1;i<=m;i++)
    {
        k[i-1]=a[n][i];
    }
    cout<<"Least total danger: "<<*min_element(k, k+m)<<endl;
    cout<<"The path should be like: "<<endl;
    printBest(n, min_element(k,k+m)-k+1);
}

void printBest(int i,int j)
{
    if(i==0||j==m+1||j==0)
    {
        return;
    }

    if((a[i-1][j-1]<=a[i-1][j])&&(a[i-1][j-1]<=a[i-1][j+1]))
    {
         printBest(i-1,j-1);
    }

    else if((a[i-1][j]<=a[i-1][j-1])&&(a[i-1][j]<=a[i-1][j+1]))
    {
        printBest(i-1,j);
    }

    else if((a[i-1][j+1]<=a[i-1][j-1])&&(a[i-1][j+1]<=a[i-1][j]))
    {
        printBest(i-1,j+1);
    }

    cout<<"("<<i<<","<<j<<")"<<endl;
}
