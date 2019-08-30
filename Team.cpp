#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int solve=0;
    int p,v,t;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>v>>t;
        if(p+v+t>1)
        solve++;
    }
    cout<<solve;
    return 0;
    
}