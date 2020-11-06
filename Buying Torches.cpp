#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long count1=0,count2=0;
        count1=k;
        count2=((k*(y+1)-2)/(x-1));
        long long sum=0;
        sum=count1+count2+1;
        cout<<sum<<"\n";
    }
}
