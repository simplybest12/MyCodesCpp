  //  BINARY SEARCH
#include<bits/stdc++.h>
using namespace std;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif

// int n,k,count=0;
// cin>>n>>k;
// vector<int> a(n);
// for(int i=0;i<n;i++){
//   cin>>a[i];
// }
// int key;
// for(int i=0;i<k;i++){
// cin>>key;
// int low=0;
// int high=n-1;
// int mid;
//   bool ok=false;
// while(low<=high){
//   mid=(low+high)/2;
//
//   if(key==a[mid]){
//
//     count++;
//     break;
//   }
//   else if(key<a[mid]){
//     high=mid-1;
//   }
//   else if(key>a[mid]){
//     low=mid+1;
//   }
// }
// if(count>0){
//   cout<<"YES"<<endl;
// }
// else{
//   cout<<"NO"<<endl;
// }
// count=0;
// }


// CLOSEST TO THE RIGHT

  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<k;i++){
    int key;
    cin>>key;
    int low=-1;//creating neg infinite numbers left to arry to index to 0 || a[l]<=X to find
    int high=n;//creating pos infinite numbers right to arry to index to n-1 || a[high]>X
    while(high>low+1){
    int mid=(low+high)/2;
    if(a[mid]<key){
      low=mid;
    }
    else{
      high=mid;
    }
  }
  cout<<high+1<<endl;

}
}

// CLOSEST TO THE LEFT
//   int n,k;
//   cin>>n>>k;
//   vector<int> a(n);
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//   }
//   for(int i=0;i<k;i++){
//     int key;
//     cin>>key;
//      int low=-1;//creating neg infinite numbers left to arry to index to 0 || a[l]<=X to find
//     int high=n;//creating pos infinite numbers right to arry to index to n-1 || a[high]>X
//     while(high>=low+1){
//     int mid=(low+high)/2;
//     if(a[mid]<key){
//       low=mid;
//     }
//     else{
//       high=mid;
//     }
//   }
//   cout<<LOW+1<<endl;
// }
// }

 // fAST SEARCH
