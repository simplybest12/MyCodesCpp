#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;
  cin>>t;
  while(t--){
  ll r,b,d,p;
  cin>>r>>b>>d;
  if(max(r,b)%min(r,b)==0){
  ll p=max(r,b)/min(r,b);
}
 else   if(max(r,b)%min(r,b)!=0){
   ll p=max(r,b)/min(r,b)+1;
 }
  if(p-1>d){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}
}
