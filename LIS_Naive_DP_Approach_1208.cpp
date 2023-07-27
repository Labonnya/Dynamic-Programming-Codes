#include<iostream>
using namespace std;

void lis(int a[],int n)
{
    int len[n],prev[n];
    for(int i=0;i<n;i++)
    {
        len[i]=1;
        prev[i]=-1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j]&&len[i]<len[j]+1)
            {
                len[i]=len[j]+1;
                prev[i]=j;
            }
        }
    }
    int m = len[0],index=0;
    for(int i=0;i<n;i++)
    {
        if(m<len[i])
        {
            m=len[i];
            index+=1;
        }
    }
    cout<<"Length of LIS is: "<<m<<endl;
    cout<<"The LIS is: "<<endl;
    m=len[0];
    int fp=0;
    for(int i=0;i<n;i++)
    {
        if(m<len[i])
        {
            if(!(fp && i))
                {
                    cout<<a[i-1];
                    fp=1;
                }
                m=len[i];
                while(i<n && len[i]==len[i+1])
                {
                    i++;
                }
                    cout<<" "<<a[i];

        }
    }
}

int main()
{
    int a[100];
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lis(a,n);
}
