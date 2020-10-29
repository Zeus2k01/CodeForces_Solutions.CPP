#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        int f=0,l=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==1)
           {
               if(f==0)
               {
                   f=i+1;
               }
               l=i;
           }
        }
        int ans=0;
        for(int i=f;i<l;i++)
        {
            if(a[i]==0)
            ans++;
        }
        cout<<ans<<"\n";
        
    }
    
}