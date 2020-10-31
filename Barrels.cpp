#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       long long ans=0;
       for(int i=0;i<=k;i++)
       {
           ans+=a[n-1-i];
       }
       cout<<ans<<"\n";
    }
}