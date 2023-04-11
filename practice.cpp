#include<bits/stdc++.h>
using namespace std;
#define debug cout<<"I am here"<<endl;
int main(){
  int n,s;
  cin>>n>>s;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int cursum=0,p=0,c=0;
        for(int i=0;i<n;i++){
            cursum+=a[i];
            p++;
            if(cursum>s){
                cursum=0;
                i=i-p+1;
                p=0;
                c++;
            }
            if(cursum==s){
                cout<<c+1<<" "<<i+1<<endl;
                break;
            }
        }
        return -1;
    }
