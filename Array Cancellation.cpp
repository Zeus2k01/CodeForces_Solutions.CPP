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
        long long a[n];
        for(int i=0;i<n;i++)
        {   
            cin>>a[i];
        }
        long long s=0;
        for(int i=0;i<n;i++)
        {
          s=s+a[i];
          if(s<0) s=0;
        }
        cout<<s<<endl;
        
    }
}