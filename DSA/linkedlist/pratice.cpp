#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  struct Node *next;
}*first=NULL;

void create(int a[],int n){
  struct Node *temp,*newnode;
  first=new Node;
  first->data=a[0];
  first->next=NULL;
  newnode=first;
  for(int i=1;i<n;i++){
    temp=new Node;
    temp->data=a[i];
    temp->next=NULL;
    newnode->next=temp;
    newnode=temp;
  }
}

void display(struct Node *first){
  struct Node *p;
  p=first;
  while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
  }
}
Node mergesortedlist( Node list1, Node list2){
  vector <int> a();
  while(list1!=NULL){
      a.pushback(list1->val);
  }
  while(list2!=NULL){
      a.pushback(list2->val);
  }
  sort(a.begin(),a,end());

}

int main(){
  int n;
  cin>>n;
  int l1[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  create(a,n);
  display(first);
  int l2[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  create(a,n);
  display(first);












}
