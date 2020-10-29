#include<bits/stdc++.h>
using namespace std;
int funct(long long n)
{
    if(n==0)
    return 0;
    return 1+funct(n/10);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int count=0;
        count+=((x%10)-1)*10;
        if(funct(x)==1)
        {
            count+=1;
        }
        else if(funct(x)==2)
        {
            count+=3;
        }
        else if(funct(x)==3)
        {
            count+=6;
        }
        else if(funct(x)==4)
        {
            count+=10;
        }
        cout<<count<<"\n";
        
    }
}