#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,upper=0,lower=0;
    int l=s.length();
    for(i=0;i<l;i++)
    {
        int c=s[i];
        if(isupper(c))
        upper++;
        else 
        lower++;
        
    }
    for(i=0;i<l;i++)
    { int d=s[i];
        if(upper>lower)
        {
            if(islower(d))
            s[i]=toupper(d);
        }
        
        else if(lower>upper)
        {
            if(isupper(d))
            s[i]=tolower(d);
        }
        else
        {
            if(isupper(d))
            s[i]=tolower(d);
        }
    }
    cout<<s;
    
}