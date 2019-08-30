#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ch=s[0];
    if(islower(ch))
    s[0]=toupper(ch);
    cout<<s;
    
}