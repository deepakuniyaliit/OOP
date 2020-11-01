#include<iostream>
using namespace std;

class Base{};
class Derived:public Base{};

int main(){
  Derived d;
  Base b;

  try{
    throw d;
  }

  catch(Derived d){
    cout<<"Caught Derived Exception"<<endl;
  }

  catch(Base b){
    cout<<"Caught Base Exception"<<endl;
  }
}
