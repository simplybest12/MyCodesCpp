// Two Pointer Step 1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
//   // Merging of two arrays
//   int n,m;
//   cin>>n>>m;
//   int a[n],b[m];
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//   }
//   for(int j=0;j<m;j++){
//     cin>>b[j];
//   }
//    int n1=(sizeof(a)/sizeof(a[0]));
//    int n2=(sizeof(b)/sizeof(b[0]));
//    int i=0,j=0,k=0,c[n1+n2];
//    while(i<n1 && j<n2){
//        if(a[i]<b[j]){ //comparing one by one each element of both arrays
//           c[k]=a[i];
//           i++;
//           k++;
//         }
//        else{
//           c[k]=b[j] ;
//           j++;
//           k++;
//       }
//       }
//    while (i<n1) { //if second array b[] is empty
//      c[k]=a[i];
//      i++;
//      k++;
//    }
//    while (j<n2) {  //if first array a[] is empty
//      c[k]=b[j];
//      j++;
//      k++;
//    }
//   for(k=0;k<(n1+n2);k++){
//     cout<<c[k]<<" ";
//   }
//   // time complexity is O(n)
//   return 0;
// }


// Number of small elements
// int n,m;
// cin>>n>>m;
// int a[n],b[m];
// for(int i=0;i<n;i++){
//   cin>>a[i];
// }
// for(int j=0;j<m;j++){
//   cin>>b[j];
// }
// int c[m],i=0;
// for(int j=0;j<m;j++){
//   while(i<n && a[i] < b[j]){
//     i++;
//   }
//   c[j]=i;
// }
// for(int x:c){
//   cout<<x<<" ";
// }
// return 0;
// }


// Number of seghments

// ll n,s;
// cin>>n>>s;
// vector<int> a(n);
// for(int i=0;i<n;i++){
//   cin>>a[i];
// }
// int l=0,r;
// ll x=0;
// int res=0;
// for(r=0;r<n;r++){
//   x+=a[r];
//   while(x>s){
//     x-=a[l];
//     l++;
//   }
//   res=max(res,r-l+1);
// }
// cout<<res<<endl;
// }
// number of Equals

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<k;i++){
    int key;
    cin>>key;
    i
  }
}
