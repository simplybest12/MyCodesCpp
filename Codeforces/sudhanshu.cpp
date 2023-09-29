#include <bits/stdc++.h>
using namespace std;
int main(){
  cout<<"FOR ADDITION PRESS 1"<<endl;
  cout<<"FOR SUBTRACTION PRESS 2"<<endl;
  cout<<"FOR MULTIPLICATION PRESS 3"<<endl;
  cout<<"FOR DIVISION PRESS 4"<<endl;
float a,b;
int c;
cin>>c;
cin>>a>>b;

if(c==1){
  cout<<a+b<<endl;
}
else if(c==2){
  cout<<a-b<<endl;
}
else if(c==3){
  cout<<a*b<<endl;
}
else if(c==4){
  cout<<a/b<<endl;
}
}
