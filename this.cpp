#include<iostream>
using namespace std;

class Test{
public:
  Test(int value=0){
    x = value;
  }

  void print() const{//Contast function - Will not be able to modify anything
    cout<<"x = "<<x<<endl; //Implicitly using this pointer
    cout<<"this->x "<<this->x<<endl; //Explicitly using this pointer
    cout<<"(*this).x "<<(*this).x<<endl; //Explicitly using this pointer
  }

private:
  int x;
};

int main(){
  Test t(20);
  t.print();
}
