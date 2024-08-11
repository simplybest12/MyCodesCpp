#include <math.h>
#include<iostream>
#include<vector>
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

int main(){
    ll k;
    cin>>k;
    ll n =1;
    ll c=0;
    while(1){
       if((n-1)>k){
        cout<<c<<endl;
        break;
       }
       n=n<<1;
       c++;
    }
}