#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      int p=*max_element(a,a+n);
      int c=0;
      if(m<p){
        a[i]-=m;
        c++;
      }
      if(c==0){
        break;
      }
    }
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
}
