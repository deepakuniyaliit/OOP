#include<iostream>
using namespace std;

class Parent{
public:
  void displayMessage(){
    cout<<"Hello I am displayMessage"<<endl;
  }
};

class Child:public Parent{
public:
  void displayMessage(){
    cout<<"Hello I am displayMessage"<<endl;
  }
};


int main(){
  Parent p;
  p.displayMessage();
  Child c;
  c.displayMessage();
}
