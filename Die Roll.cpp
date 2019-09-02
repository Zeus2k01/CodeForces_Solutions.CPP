#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int pos=0;
    int max=n;
    if(n<m)
    {
        max=m;
        
    }
    
    for(int i=1;i<=6;i++)
    {
        if(i>=max)
        pos++;
        
    }
        if(pos==0)
        {
            cout<<"0/1";
        }
    
      else if(pos==1)
        {
            cout<<"1/6";
            
        }
        
        else if(pos==2)
        {
            cout<<"1/3";
        }
        else if(pos==3)
        {
            cout<<"1/2";
        }
        else if(pos==4)
        {
            cout<<"2/3";
        }
        else if(pos==5)
        {
            cout<<"5/6";
        }
        else if(pos==6)
        {
            cout<<"1/1";
        }

    return 0;
}
