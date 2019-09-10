#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int size=strlen(s);
    for(int i=0;i<size;i+=2)  \\in order to avoid '+' character ,we iterate the array only for the numbers
    {
        for(int j=0;j<size-i-2;j+=2)
        {
            if(s[j]>s[j+2])
            swap(s[j],s[j+2]);\\using STL we can swap any two numbers having syntax swap(a,b)
            
        }
        
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<s[i];
    }
    return 0;
}