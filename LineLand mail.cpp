#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,i,minimum,maximum;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
    for(i=1; i<n-1; i++)
    {
        minimum=min((a[i+1]-a[i]),(a[i]-a[i-1]));
        maximum=max((a[i]-a[0]),(a[n-1]-a[i]));
        cout<<minimum<<" "<<maximum<<endl;
    }
    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
    return 0;
}