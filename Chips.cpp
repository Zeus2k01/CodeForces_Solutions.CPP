#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count[n]={0};
    int x[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(abs((x[i]-x[j]))%2==1)
        {
        count[i]++;
        }
        
        }    
    }
    int min=count[0];
    for(int i=0;i<n;i++)
    {
        if(min>count[i])
        min=count[i];
    }
    cout<<min;
}
