#include<bits/stdc++.h>
using namespace std;

class Rectangle{
  int length;
  int breadth;
public:
  // Rectangle(){//non parametrized constructor
  //   length=0;
  //   breadth=1;
  // }
  // Rectangle(int l=1,int b=1){
  //   &setlength=(l);
  //   &setbreadth=(b);
  // }
  void setlength(int l){
    if(l>=0){
       length=l;
    }
     length=0;
  }
  void setbreadth(int b){
    if(b>=0){
       breadth=b;
    }
     breadth=0;
  }
  int area(){//inline functions(func which are defined at same time) are written inside class functions inside class must not be cmplexed it must be simple
    return length*breadth;
  }
  int perimeter();//non inline
  inline int perimeter();//inline
};

int Rectangle:: perimeter(){
  return 2*(length + breadth);
}

int main(){
  Rectangle r1;
  r1.setlength(10);
  r1.setbreadth(5);
  cout<<r1.area()<<endl;
  cout<<r1.perimeter()<<endl;

}
