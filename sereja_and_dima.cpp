#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define FOR1(i,a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define FOR(i,n) for(int i=0;i<n;i++)
int printArray(int *A,int n){
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}
int mod(int n){
  if(n<0){
    n=-n;
  }
  else {
    n=n;
  }
}

void insertsSort(int *A,int n){
  int j,key,i;
  // loops for passes i.e. its line seperating sorted and insorted array (1|2,|4|,2,|4)--> n-1
  for(i=1;i<n-1;i++){
    j=i-1;
    key=A[i];
      //loop for each pass
    while(j>=0 && A[j]> key){//j>=0 cozz of it cant be -1 && < || > for ascending anf descending
      A[j+1]=A[j];
      j--;
    }
    A[j+1]=key;
  }
}
// dont use this coz of high time complexity O(n^2)
int gcd(int a,int b){
  if(b==0) return a;
  return gcd(b,a%b);
}
// time complexity of this is O(logn) and has built in function too __gcd(a,b)
ll fact(ll n){
  if(n==0 || n==1) return 1;
  return n*fact(n-1);
}
// time complexity of this is O(n)
int intdig(int n){
    int t=0;
    while(n>0){
      n=n/10;
      t++;
    }
    return t;
}
bool isPrime(int n)
{
    if (n <= 1)
        return 1;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 1;
    return 0;
}
void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}
int removedupliarr(int A[],int n){
  if(n==0||n==1){return n;}
  int temp[n],j=0;
  for(int i=0;i<n-1;i++){
    if(A[i+1]!=A[i]){
      temp[j++]=A[i];
    }
  }
  temp[j++]=A[n-1];
  for(int i=0;i<j;i++){
    A[i]=temp[i];
  }
  return j;
}

int main(void){
// cin.tie(NULL);
//
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// #endif
// int t;
// cin>>t;
// while(t--){
//   int n,count=0;
//   cin>>n;
//   vi a(n);
//   FOR1(i,a,n);
//   for(int i=0;i<n-1;i++){
//     if((a[i]+a[i+1])%2!=0){
//       count++;
//     }
//   }
//   cout<<count/2<<endl;
// }
// }
int n,sereja=0,dima=0;
cin>>n;
vi a(n);
FOR1(i,a,n);

int i=0,j=n-1;
int c=0,p[1000],k=0,l=0;

while(i<=j){
  if(a[i]>a[j]){
    p[k++]=a[i];
    i++;
    c++;
  }
  else{
    p[k++]=a[j];
    j--;
    c++;
  }
}
for(int i=0;i<k;i+=2){
  sereja+=p[i];
}
for(int i=1;i<k;i+=2){
  dima+=p[i];
}
cout<<sereja<<" "<<dima<<endl;
}
