#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ct=0,i,j,flag=0;
    int l=s.length();
    for(i=0;i<l;i++)
    {  flag=0;
        for(j=0;j<i;j++)
        {
        if(s[j]==s[i])
        {
        flag=1;
        break;
        }
        }
    if(flag==0)
    ct++;
    
        
    }
    if(ct%2==0)
    {
    cout<<"CHAT WITH HER!";
    }
    else
    cout<<"IGNORE HIM!";
    
    
    
    
}