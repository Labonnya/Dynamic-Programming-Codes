#include <bits/stdc++.h>
using namespace std;

int price[20];
bool d[20];
int value[20];
int s[20];
int i,n;

int cutRod(int n) {
    int val[n+1];
    val[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int maxi;
        for (int j = 1; j <= i; ++j) {
            maxi = max (maxi, price[j] + val[i-j]);
        }
        val[i] = maxi;
    }
    cout<<"Maximum profit possible is: " <<val[n];
    return val[n];
}

int main() {

    cout<<"Enter number of length of rod: "<<endl;
    cin>>n;
    cout<<"Enter prices: "<<endl;
    for(i=0;i<n;i++){
        cin>>price[i];
    }
    cout<<"Enter total length of rod: "<<endl;
    int y;
    cin>>y;
    for (i = 0; i < n; ++i)
    {
        d[i] = false, value[i] = 0;
        }

    cutRod(y);
    return 0;
}
