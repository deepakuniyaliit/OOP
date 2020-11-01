#include<iostream>
using namespace std;

class Exception{
public:
  Exception(){cout<<"Constructing an Object"<<endl;}
  ~Exception(){cout<<"Destroying an Object"<<endl;}
};

int main(){
try{
  Exception e;
  throw 100;
}
catch(int i){
  cout<<"Caught "<<i<<endl;
}
}
