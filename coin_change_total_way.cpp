#include<iostream>
using namespace std;


int main()
{
    int sol[50][50];
    int i,j,n,x,amount;
    int coin[20];
    cout<<"Enter amount: "<<endl;
    cin>>amount;
    cout<<"Enter coin numbers: "<<endl;
    cin>>x;
    cout<<"Enter coins: "<<endl;
    for(i=0;i<x;i++)
    {
        cin>>coin[i];
    }

    for(i=1; i<=amount+1; i++){
      sol[0][i] = 0;
    }

    for(i=1; i<=x; i++){
      sol[i][0] = 1;
    }

    for(i=1;i<=x+1;i++)
    {
        for(j=1;j<=amount+1;j++)
        {

            if(coin[i-1]>j)
            {
                sol[i][j]=sol[i-1][j];
            }
            else
            {
                sol[i][j]=sol[i-1][j]+sol[i][j-coin[i-1]];
            }
        }

    }
    cout<<"Total number of ways: "<< sol[x][amount];

}
