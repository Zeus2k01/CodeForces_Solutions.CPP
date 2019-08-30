#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int crime=0,sum=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        sum+=a[i];
        else if(sum>0)
        sum--;
        else 
        crime++;
    }
    
    cout<<crime;
}