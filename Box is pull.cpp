#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        int ans=0;
        ans=abs(x-x1)+abs(y-y1);
        if(x!=x1&&y!=y1)
        {
            ans+=2;
        }
        cout<<ans<<"\n";
    }
}