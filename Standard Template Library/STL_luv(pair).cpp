#include<bits/stdc++.h>
using namespace std;
int main(){
  pair<int,int> p;
  // p=make_pair(2,4);
  p={2,4};
  cout<<p.first<<" "<<p.second<<endl;
  int a[]={1,2,3};
  int b[]={4,5,6};
  pair<int,int> p_array[3]; //name of p_array with size
  p_array[0]={1,4};
  p_array[1]={2,5};
  p_array[2]={3,6};
  for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
  swap(p_array[0],p_array[2]);

  for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
  // how u take input from user
  pair<int,string> p;
  cin>>p.first;
  cin>>p.second;
  cout<<p.first;
  cout<<p.second;
}
ll n;
cin>>n;
vector<pair<int,int>> v;
int a[n],b[n];
for(int i=0;i<n;i++){
  cin>>a[i]>>b[i];
}
for(ll i=0;i<n;i++){
  v.push_back(make_pair(a[i],b[i]));
}
sort(v.begin(),v.end());
for(ll i=0;i<n;i++){
  cout<<v[i].first<<" "<<v[i].second;
}
cout<<endl;
