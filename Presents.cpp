#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    int n,e;
    cin>>n;
    int b[n+10];
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }
    for (int i = 0; i < n; ++i) {
        a[b[i]]=i+1;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}
