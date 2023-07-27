#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int price[100][100], rev[100][100];
int choc(int a, int b)
{
    if(rev[a][b]>-1)
    {
        return rev[a][b];
    }

    int x=INT_MIN, y=INT_MIN;

    for(int i=1; i<=a; i++)
    {
       x=max(x, price[i][b]+choc(a-i, b));
    }

    for(int i=1; i<=b; i++)
    {
       y=max(y, price[a][i]+choc(a, b-i));
    }

    return rev[a][b]=max(x, y);
}

int main()
{
    int p,q;
    cout<<"Enter rows and columns of chocolate bar: "<<endl;
    cin>>p>>q;
    cout<<"Enter prices: "<<endl;
    for(int i=1; i<=p; i++){
        for(int j=1; j<=q; j++){
            cin>>price[i][j];
        }
    }
    for(int i=0; i<=p; i++)
        {
            rev[i][0]=0;
        }
    for(int i=0; i<=q; i++)
        {
                rev[0][i]=0;
        }
    for(int i=1; i<=p ;i++){
        for(int j=1; j<=q ;j++){
            rev[i][j]=-1;
        }
    }

    cout<<"Max Revenue is: "<<choc(p,q);
}
