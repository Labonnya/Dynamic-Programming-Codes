#include <bits/stdc++.h>

using namespace std;

int editDistance(string s1, string s2)
{
    int i,j,x,y;
    x=s1.length();
    y=s2.length();
    int arr[x+1][y+1];
    for(i=0;i<=x;i++)
    {
        arr[i][0]=i;
    }
    for(i=0;i<=y;i++)
    {
        arr[0][i]=i;
    }
    for(i=1;i<x+1;i++)
    {
        for(j=1;j<y+1;j++)
        {
			if(s1[i-1]==s2[j-1])
            {
                arr[i][j]=arr[i-1][j-1];
            }
            else
            {
                arr[i][j]= 1 + min(min(arr[i-1][j],arr[i][j-1]),arr[i-1][j-1]);
            }
        }
    }
    return arr[x][y];
}

int main()
{
    string w1,w2;
    cout<<"Enter first string: "<<endl;
    cin>>w1;
    cout<<"Enter second string: "<<endl;
    cin>>w2;
    cout<<"Minimum operation required: "<<editDistance(w1,w2)<<endl;

}

