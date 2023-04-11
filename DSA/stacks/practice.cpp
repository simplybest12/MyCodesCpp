#include <bits/stdc++.h>
using namespace std;
struct Stack{
  int size;
  int top;
  int *s;
}st;
void display(struct Stack st){
  int i;
  for(i=st.top;i>=0;i--){
    cout<<st.s[i]<<" ";
  }
  cout<<endl;
}
void push(Stack *st,int x){
  if(st->top==st->size-1){
    cout<<"Stack Overflow"<<endl;
  }
  else{
    st->top++;
    st->s[st->top]=x;
  }
}
int pop(struct Stack *st){
  int x=-1;
  if(st->top==-1){
    cout<<"Stack Underflow"<<endl;
  }
  else{
    x=st->s[st->top];
    st->top--;
  }
  return x;
}
void create(struct Stack *st){
  cout<<"Enter Size:"<<endl;
  cin>>st->size;
  st->s=new int[st->size];
  st->top=-1;
}
int peak(struct Stack st,int pos){
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
  create(&st);
  for(int i=0;i<(st.size);i++){
    int x;
    cin>>x;
    push(&st,x);
  }
  for(int i=0;i<(st.size-2);i++){
    pop(&st);
  }
  cout<<peak(st,2)<<endl;
  display(st);
  cout<<isFull(st)<<endl;
  cout<<stackTop(st)<<endl;
}
