#include<iostream>
using namespace std;

class Parent1{
public:
  Parent1(){
    cout<<"Base Class Constructor-1"<<endl;
  }
  ~Parent1(){
    cout<<"Base Class Destructor-1"<<endl;
  }
};

class Parent2{
public:
  Parent2(){
    cout<<"Base Class Constructor-2"<<endl;
  }
  ~Parent2(){
    cout<<"Base Class Destructor-2"<<endl;
  }
};

class Child: public Parent1, public Parent2{
public:
  Child(){
    cout<<"Derived Class Constrcutor"<<endl;
  }
  ~Child(){
    cout<<"Derived Class Destructor"<<endl;
  }
};

int main(){
  Child c;
}
