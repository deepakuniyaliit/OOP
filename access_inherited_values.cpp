#include<iostream>
using namespace std;

class Parent{
public:
  Parent(int x){
    this->x=x;
    cout<<"Base Class"<<endl;
  }

  void print(){
    cout<<"Variable in Base Class is "<<x<<endl;
  }

  int getX(){
    return x;
  }
private:
  int x;
};

class Child:public Parent{
public:
  Child(int j):Parent(j){
    cout<<"Derived Class"<<endl;
  }
  //Function Overriding
  void print(){
    cout<<"Variable in Derived Class is "<<getX()<<endl;
  }
};

int main(){
Parent p(20);
p.print();
Child c(10);
c.print();
}
