#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char ch[100];
    cin>>ch;
    int l=strlen(ch);
    int rot=0,difference,flag=97;
    for(int i=0;i<l;i++)
    {
        difference=abs(flag-ch[i]);
        if(difference >13){
        difference=26-difference;
        }
        rot+=difference;
        flag=ch[i];
        
    }
    
    cout<<rot;
}    