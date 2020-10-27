#include<iostream>
using namespace std;

class Base{
public:
  Base(){
    cout<<"Constructing Base Class"<<endl;
  }
  //Virtual Destructor
  virtual ~Base(){
    cout<<"Destroying Base Class"<<endl;
  }
};

class Derived:public Base{
public:
  Derived(){
    cout<<"Constructing Derived Class"<<endl;
  }
  //Virtual Destructor
  ~Derived(){
    cout<<"Destroying Derived Class"<<endl;
  }
};


int main(){
  Derived *d = new Derived();
  Base *b = d;
  delete b;//Undefined Behaviour
}
