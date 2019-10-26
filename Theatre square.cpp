#include<iostream>
using namespace std;
int main()
{
    long long m,n,a,l,o;
    cin>>m>>n>>a;
     l=m/a;
     o=n/a;
    if(m%a!=0)
    {
    l++;
    }
    if(n%a!=0)
    {
        o++;
    }
    cout<<l*o;
}