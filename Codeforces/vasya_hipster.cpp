#include<bits/stdc++.h>
using namespace std;
int main() {
int n, m;
cin>>n>>m;
int min=min(n,m);
int max=max(n,m) ;
int p=(max-min)/2;
cout<<min<<" "<<p<<endl;
}
