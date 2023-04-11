#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  struct Node *next;
} *first=NULL;

void display(struct Node *p){
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
  cout<<endl;

}
void displayrec(struct Node *p){

  if(p!=NULL){
        display(p->next);
    cout<<p->data<<endl;
  }

}
void create(int a[],int n){
  int i;
  struct Node *t,*last;
  first=new Node;
  first->data=a[0];
  first->next=NULL;
  last=first;
  for(int i=1;i<n;i++){
    t=new Node;
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}
struct Node *createl(struct Node *head,int size){
  int i,val;
  struct Node *temp,*newnode;
  for(int i=0;i<size;i++){
    if(i==0){
      cin>>val;
      head->data=val;
      if(size==1){
        head->next=NULL;
        return head;
      }
      temp=head;
    }
    else{
      newnode=new Node;
      cin>>val;
      newnode->data=val;
      newnode->next=NULL;
      temp->next=newnode;
      temp=newnode;
    }
  }
      return head;
}
int deleten(struct Node *p,int pos){
  Node*q=NULL;
  int x=-1;
  if(pos==1){
    x=first->data;
    q=first;
    first=first->next;
    free(q);
  }
  else{
    for(int i=0;i<pos-1;i++){
      q=p;
      p=p->next;
    }
    q->next=p->next;
    x=p->data;
    free(p);
  }
  return x;
}
void deletewdoutnode(struct Node* pos){
  if(pos==NULL){
    return ;
  }
  else{
    if(pos->next==NULL){
      cout<<"can be deleted without header"<<endl;
    }
    struct Node *temp=pos->next;
    pos->data=pos->next->data;
    pos->next=pos->next->next;
    free(temp);

  }
}
void sort012(struct Node* first,int n){
  struct Node *p=first,*q,*r;
  int a[n];
  int k=0;
  while(p!=NULL){
    if(p->data==0){
      a[k++]= p->data;
    }
  }
  k++;
  while(q!=NULL){
    if(q->data==1){
      a[k++]= q->data;
    }
  }
  k++;
  while(r!=NULL){
    if(r->data==2){
      a[k++]= r->data;
    }
  }
  for(int i=0;i<k;i++){
    cout<<a[i]<<endl;
  }
}
Node* swapn(struct Node* first){
  struct Node *p,*q;
  p=first->next;
  q=first;
  q=p->next;
  p->next=q;
  first=p;
  // while(p->next!=NULL){
  //     q=p;
  //     p=p->next;
  //     q->next=p->next;
  //     p->next=q;
  // }
  return first;

}


int main(){
  int a[]={1,1,2,2,0,1,2};
  create(a,7);
  display(first);

  sort012(first,7);
  display(first);
  return 0;
}
