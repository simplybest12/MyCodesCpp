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
void InToBinary(int n){
  ll bin[100],p=0;
  while(n>0){
    bin[p++]=n%2;n=n/2;
  }
  for(int i=p-1;i>=0;i--){
    cout<<bin[i];
  }
  cout<<endl;

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
// void InToBinary(int n){
//   char str[100];
//   while(n>0){
//     str[p++]=n%2;
//     n=n/2;
// }
bool checksort(string str){
  int count=0;
  int n=str.length();
  char str1[n];
  for(int i=0;i<n;i++){
    str1[i]=str[i];
  }
  sort(str1,str1+n,greater<char> ());
  for(int i=0;i<n;i++){
    if(str[i]==str1[i]){
      count++;
    }
  }
  if(n==count){
  return true;
}
  else{
    return false;
  }
}
int BinToInt(string str){
  ll p=str.length();
  ll sum=0;
  for(int i=p;i>=0;i--){
    if(str[i]=='1'){
      ll q=(p-1)-i;
      sum+=(1<<q);
    }
  }
  return sum;
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(NULL);
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// #endif

// int t;
// cin>>t;
// while(t--){

  int n;
  cin>>n;
  ll count=0;
  while(n){
    count+=n&1;
    n=n>>1;
  }
  cout<<count<<endl;
}gfg
