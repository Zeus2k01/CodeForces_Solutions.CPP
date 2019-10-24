#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int> vect(n);
        for(int i=0;i<n;i++)
        {
            cin>>vect[i];
        }
        
        bool k=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                k&=abs(vect[i]-vect[j])!=1;
            }
        }
        cout<<2-k<<endl;
        
        
    }
}