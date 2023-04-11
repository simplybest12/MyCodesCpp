#include <bits/stdc++.h>
using namespace std;
struct Queue{
  int size;
  int front;
  int rear;
  int *a;
}q;
void create(struct Queue *q){
  cout<<"Enter Size:"<<endl;
  cin>>q->size;
  q->a=new int[q->size];
  q->front=-1;
  q->rear=-1;
}
void enqueue(struct Queue *q,int x){
  if(q->rear==q->size-1){
    cout<<"Queue is full"<<endl;
  }
  else{
    q->rear++;
    q->a[q->rear]=x;
  }
}
int dequeue(struct Queue *q){
  int x=-1;
  if(q->rear==q->front){
    cout<<"Empty Queue"<<endl;
  }
  else{
    q->front++;
    x=q->a[q->front];
  }
  return x;
}
void display(struct Queue q){
  for(int i=q.front+1;i<=q.rear;i++){
    cout<<q.a[i]<<" ";
  }
  cout<<endl;
}
int main(){
  create(&q);
  for(int i=0;i<q.size;i++){
    int x;cin>>x;
    enqueue(&q,x);
  }
  dequeue(&q);
  display(q);

}
