// Ordered Map Stores The Values In Sorted Order
#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){ // refrencing the value
  cout<<m.size()<<endl;
  for(auto &pr :m){
    cout<<pr.first<<" "<<pr.second<<endl;
  }
}

int main(){
  map<int,string> m;
  m[1]="abc";//O(log n)
  m[5]="de";
  m[3]="ghh";
  m.insert({2,"gurfh"});
  m[7];
  m[5]="yt";//replace
  auto it=m.erase(3);
  // if(it == m.end()){
  //   cout<<"NO value"<<endl;
  // }
  // else {
  //   cout<<(*it).first<<" "<<(*it).second<<endl;
  // }
  print(m);
}
