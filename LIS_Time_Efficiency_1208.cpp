#include <iostream>
using namespace std;
const int N = 150;
#define INF 1e7+3;

int k[N]={0};
int seq[N];
int idx=0;
int pre[N]={-1};

int sc(int in[],int t[],int last,int x);
int lis(int arr[],int n);

int main()
{
    int n,i;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter elements of array: "<<endl;
    for (i=0;i<n;i++)
    {
       cin>>a[i];
    }
    int result=lis(a, n);
    cout<<"Length of LIS: "<<result<<endl;
    cout<<"The LIS is: "<<endl;
    for(i=result-1;i>=0;i--)
    {
        cout<<seq[i]<<" ";
    }
}
int lis(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        pre[i]=-1;
    }

    k[0]=0;
    int l=0;
    for(i=1;i<n;i++)
    {
        if(arr[k[0]]>arr[i])
        {
            k[0]=i;
        }
        else if(arr[k[l]]<arr[i])
        {
            l++;
            k[l]=i;
            pre[k[l]]=k[l-1];
        }
        else
        {
            int in=sc(arr,k,n,arr[i]);
            k[in]=i;
            pre[k[in]]=k[in-1];
        }
    }
    int in=k[l];
    while(in!=-1)
    {
        seq[idx++]=arr[in];
        in=pre[in];
    }
    return l+1;
}
int sc(int in[],int t[],int last,int x)
{   int st=0;
    int mid;
    int len=last;
    while(st<=last)
    {
        mid=(st+last)/2;
        if(mid<len && in[t[mid]]<x && x<=in[t[mid+1]])
        {
             return mid+1;
        }

        else if(in[t[mid]]<x)
        {
            st=mid+1;
        }

        else
        {
           last=mid-1;
        }
    }
    return -1;
}
