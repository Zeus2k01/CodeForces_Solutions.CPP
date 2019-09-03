#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c,b,d;
    cin>>c>>b>>d;
    int a[c];
    for(int i=0;i<c;i++)
    {
        cin>>a[i];
        
    }
    int sum=0,count=0;
    for(int i=0;i<c;i++)
    {
        if(a[i]<=b)
        {
         sum+=a[i];
        }
        if(sum>d)
        {
            count++;
            sum=0;
        }
    }
    cout<<count;
    
}