#include<iostream>
using namespace std;

//Base Class
class A{
public:
  A(){
    x = 10;
    y = 20;
    z = 30;
  }
public:
  int x;
protected:
  int y;
private:
  int z;
};

class B: public A{
  /*
  x - public
  y - protected
  z - Hidden
  */
public:
  void print(){
    cout<<"x - "<<x<<endl; //public
    cout<<"y - "<<y<<endl; //protected
    //cout<<"z - "<<z<<endl;
  }
};

class C: protected A{
  /*
  x -
  y -
  z -
  */
};

class D: private A{
  /*
  x -
  y -
  z -
  */
};

int main(){
  B b;
  b.print();
}
