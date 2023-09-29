#include <bits/stdc++.h>
using namespace std;
// #define st.n  st.size
struct Stack{
  int size;
  int top;
  char *s;
}st;
void display(struct Stack st){
  int i;
  for(i=st.top;i>=0;i--){
    cout<<st.s[i]<<" ";
  }
  cout<<endl;
}
void push(Stack *st,char x){
  if(st->top==st->size-1){
    cout<<"Stack Overflow"<<endl;
  }
  else{
    st->top++;
    st->s[st->top]=x;
  }
}
char pop(struct Stack *st){
  char x=-1;
  if(st->top==-1){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    x=st->s[st->top];
    st->top--;
  }
  return x;
}
void create(struct Stack *st,int size){
  st->size=size;
  st->s=new char[st->size];
  st->top=-1;
}
int peak(struct Stack st,char pos){
  int x=-1;
  if(st.top-pos+1<0){
    cout<<"Invalid : Position"<<endl;
  }
  else{
    x=st.s[st.top-pos+1];
    return x;
  }
}
int isFull(struct Stack st){
  return st.top==st.size-1;
}
int isEmpty(struct Stack st){
  return st.top==-1;
}
int stackTop(struct Stack st){
  if(isEmpty(st)==1){
    return -1;
  }
  else{
    return st.s[st.top];
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  create(&st,n);
    char c[st.size];
  for(int i=0;i<st.size;i++){
    cin>>c[i];
  }
  int k=0;
  for(int i=0;i<st.size;i++){
    if(c[i]=='('){
      push(&st,c[i]);
    }
    else if(c[i]==')'){
      if(isEmpty(st)==1){
        cout<<0<<endl;
        break;
      }
      else{
        pop(&st);
        k++;
      }
    }
  }
    if(isEmpty(st)==1){
      cout<<k<<endl;
}
    else{
      cout<<0<<endl;
    }
  }
}
