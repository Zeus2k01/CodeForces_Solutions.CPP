#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int l=t.length();
    int pos=0;
for(int i=0;i<l;i++)
    {
        if(t[i]==s[pos])
        {
            pos+=1;
        }
        
    }
    
    cout<<pos+1;
    return 0;
}