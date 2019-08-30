#include<iostream>
using namespace  std ;
int main()
{
int n,k_a=0,k_d=0;
cin>>n;
char S[n];
cin>>S;
for(int i=0;i<n;i++)
{
    if (S[i]=='A')
    k_a++;
    else
    k_d++;
    
}
 
if(k_a>k_d)
cout<<"Anton\n";
else if (k_d>k_a)
cout<<"Danik\n";
else if(k_a==k_d)
cout<<"Friendship\n";
 
}