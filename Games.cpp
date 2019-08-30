#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i][0]==a[j][1])
            {
            count++;
            }
             if(a[i][1]==a[j][0])
             {
                 count++;
             }
            
        }
        
    }
    
    cout<<count++;
    return 0;
}