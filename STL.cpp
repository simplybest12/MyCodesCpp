//#include<utility> this library is used
#include <bits/stdc++.h>
using namespace std;
int main(){
  //PAIRS -->First Topic
// void explainpair()//ye mt likhna initialize k wqt
  pair<int,int> p={1,4}; or p=make_pair(1,4)
  cout<<p.first<<" "<<p.second<<endl;
  pair<int,pair<int,int>> p1={1,{1,3}};
  cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;//to print and acess element inside pair
  pair<int,int> arr[]={{1,2},{3,4},{5,6}};
  cout<<arr[1].first<<endl;
  // cout<<arr[2]<<endl; wrong statement will show error
  you could take also by
  cin>>p.first(2) property
  ands print it bby
  cout<<p.first;

//VECTORS --> Second Topic
// void explainvector()//ye mt likhna initialize k wqt
vector <int> v;
// v.push_back(1);
v.emplace_back(1);//both push and emplace works same but more efficiently and less time taking is emplace
cout<<v<<endl;
vector <int> v(5,100); //it will print 100...5times
void
}
