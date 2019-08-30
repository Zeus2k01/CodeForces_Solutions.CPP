#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        ans+=a;
        if(s[i]=='2')
        ans+=b;
        if(s[i]=='3')
        ans+=c;
        if(s[i]=='4')
        ans+=d;
        
    }
    cout<<ans;
}
