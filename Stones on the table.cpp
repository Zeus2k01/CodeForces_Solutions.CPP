#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //the number of stones
    int count=0;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        
        count ++;
    }
     cout<<count;
     
}