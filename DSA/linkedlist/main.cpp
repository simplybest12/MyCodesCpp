#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
  int data;
  struct Node *next;
} *first=NULL;

void display(struct Node *p){
  while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
  }

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

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool flag=0;
    ll x=0,y=0;
    for(ll i=0;i<n;i++){
      if(str[i]=='U'){
        y++;
      }
      else if(str[i]=='D'){
        y--;
      }
      else if(str[i]=='L'){
        x--;
      }
      else if(str[i]=='R'){
        x++;
      }
      if(x==1 && y==1){
        flag=1;
        break;
      }
    }
    if(flag==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }

  return 0;
}
