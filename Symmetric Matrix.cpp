#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a,b,c,d,f=0;
        while(n--)
        {
            cin>>a>>b>>c>>d;
            if(b==c)
            f=1;
        }
        cout<<((f&&m%2==0)?"YES":"NO")<<endl;
        
    }        
}
