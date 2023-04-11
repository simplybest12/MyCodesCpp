#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define MAX_INT  2000000
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vd vector<double>
#define vs vector<string>
#define vvi vector<int<vector<int>>>
#define REP(i,a,b) for(int i=a;i<b;i++)
int printArray(int *A,int n){
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}
bool isPalindrome(string s,int l,int r){
  if(l>=r){
    return true;
  }
  if(s[l]!=s[r]){
    return false;
  }
  return isPalindrome(s,l+1,r-1);
}
ll sum(ll n){
  if(n==1){
    return 1;
  }
  return n+sum(n-1);
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
int pAlindrome(int num){
  int rev=0,digit;
  while(num!=0){
   digit=num%10;
   rev=(rev*10)+digit;
   num=num/10;
}
return rev;

}
void SieveOfEratosthenes(int n)
{    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
int firstindex(int array[],int target,int arraysize){
if(target==array[0])
return 0;
if(arraysize==0)
return -1;
return firstindex(array+1,target,arraysize-1)+1;
}

int lastindex(int newarray[],int targetelement,int sizeofarray){
    if(targetelement==newarray[sizeofarray-1])
        return sizeofarray-1;
    if(sizeofarray==0)
        return -1;
    return lastindex(newarray,targetelement,sizeofarray-1);
}

void printCharWithFreq(string str)
{
    int n = str.size();
    int freq[26];
    int b[1500],k=0;
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
    for (int i = 0; i < n; i++) {
        if (freq[str[i] - 'a'] != 0) {
            cout << str[i] << freq[str[i] - 'a'] << " ";
            freq[str[i] - 'a'] = 0;
            b[k++]=freq[str[i]-'a'];
        }
    }
}
unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
ll power2(ll n){
  ll c=0;
  while(n>1){
    n=n/2;
    c++;
  }
  return c;
}
long long fastpow(ll a,ll b){
  long long res=1;
  while(b>0){
    if((b&1)!=0){
      res=(res * a);
    }
    a=(a*a);
    b=b>>1;
  }
  return res;
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // #ifndef ONLINE_JUDGE
  // // freopen("input.txt","r",stdin);
  // // freopen("output.txt","w",stdout);
  // #endif
  int t;
  cin>>t;
  while(t--){
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
if(x1>1 || x2>1 || y1>1 || y2>1 ||x1>1 || x2>1 || y1>1 || y2>1 ){
  cout<<"-1"<<endl;
}
else if(y1==y2){
  if(y1==0){
    cout<<0<<" "<<1<<" "<<1<<" "<<1<<endl;
  }
  else if(y1==1){
    cout<<0<<" "<<0<<" "<<1<<" "<<0<<endl;
  }
}
else if(x1==x2){
  if(x1==0){
    cout<<1<<" "<<0<<" "<<1<<" "<<1<<endl;
  }
  if(x1==1){
    cout<<0<<" "<<0<<" "<<0<<" "<<1<<endl;
  }
}
else if(x1==x2 && y1==y2){
  if(x1==0){
    cout<<0<<" "<<1<<" "<<1<<" "<<0<<endl;
  }
}
else if(x1==y1 && y2==x2){
    cout<<0<<" "<<1<<" "<<1<<" "<<0<<endl;
}
else if(x1!=y1 && x2!=y2){
  cout<<0<<" "<<0<<" "<<1<<" "<<1<<endl;
}
}
}
