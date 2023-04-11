 #include <bits/stdc++.h>
using namespace std;

void printVec1(vector<int> v){
  for(int i=0;i<v.size();++i){
    //v.size() tells the size of an array having O(1);
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
void printVec(vector<pair <int,int>> v){
  for(int i=0;i<v.size();++i){
    //v.size() tells the size of an array having O(1);
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
  cout<<endl;
}
int main(){
//   vector <int> v;
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);//having complexity of O(1) and sends elemtnts at last
//   // }
//
//   vector<int> v(10,1);//printing  1 10 times
//   vector<int>v1(5);
//   v.push_back(5);
//   cout<<v.size()<<endl;
//   printVec(v);
//   printVec(v1);//this will lead to print 0 5 times
//   v.pop_back();//having complexity of O(1) and eliminate elements from last
//   printVec(v);
//   vector<int> v2=v;//in array we cant copy elements like this qki waha address copy ho jata tha
//   //time complexity O(n)
//   printVec(v);
//   v2.push_back(5);
//   printVec(v2);
//   function me pass krte wqt reference ka use lema
// vector<string> v;
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     string s;
//     cin>>s;
//     v.push_back(s);
//   }
//   printVec(v);
// }
// vector<pair<int,int>> v;//={{1,2},{3,4},{5,6}};
// // printVec(v);
//   int n;
//  cin>>n;
// for(int i=0;i<n;i++){
//   int x,y;
//   cin>>x>>y;
//   v.push_back({x,y}); //we could use emplace_back wid less time
// }
// printVec(v);
// }
//
// int N;
// cin>>N;
// vector<int>  v[N];// declaring arrays or vector insidee thr vector
// for(int i=0;i<N;++i){
//   int n;
//   cin>>n;                              //2
//   for(int i=0;i<n;i++){                //3
//   int x;                               //1 2 3
//   cin>>x;                              //3
//  v[i].push_back(x);                    //3 4 5
// }
// }
// for(int i=0;i<N;i++){
//   printVec1(v[i]);
// }
// cout<<v[0][0]  //mtlb 0th vector ka 0Th element kya hga
// }
//by this humlogo  ne rows fix krdiya i.e. N aur usle andr elementd dynamic h
//ab maanlo dono dynamic krna ho to tb hm vector of vector ka istemal krte h
//  int N;
//  cin>>N;
//  vector<vector<int>> v;
//  for(int i=0;i<N;i++ ){
//  int n;
//  cin>>n;
//  vector <int> temp;
//  for(int i=0;i<n;i++){
//    int x;
//    cin>>x;
//    temp.push_back(x);
//  }
//  v.push_back(temp);
// }
// for(int i=0;i<v.size();i++){
//   printVec1(v[i]);
// }
// cout<<endl;
// cout<<v[0][1]<<endl;
// }

//ITERATORS
//  vector<int> v={2,3,4,5,6};
//  for(int i=0;i<v.size();i++){
//    cout<<v[i]<<" ";
//  }
//  cout<<endl;
//  vector <int> ::iterator it=v.begin(); //initial condition
//  for(it=v.begin();it!=v.end();it++){
//    cout<<(*it)<<endl;
//  }
//  //for each loop se b kr skte h outout aur yeh har jagah valid hta hai
//  for(int value : v){
//    cout<<value<<endl;
//  }
// }
//  // abpair ka kaise krenge
//  vector <pair<int,int>> v_p={{1,2},{3,4},{5,6}};
//  vector <pair<int,int>> :: iterator it=v_p.begin();
//  for (it=v_p.begin();it!=v_p.end();it++){
//    cout<<it->first<<" "<<it->second<<endl; // another way--cout<<(*it).first<<" "<<(*it).second<<endl;
//  }
// }
// How to declare iterators in short;

 // vector <int> ::iterator it=v.begin(); ke jagah pe simple auto ka help le skyte h dekhiye kaise

vector<int> v={2,4,6,7,8};
for(auto it=v.begin();it!=v.end();it++){
  cout<<*it<<endl;
}
}
