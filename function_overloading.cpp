#include<iostream>
using namespace std;

class TwoDShape{
public:
  int area(int a){
    return a*a;
  }

  int area(int a, int b){
    return a*b;
  }
};

int main(){
  TwoDShape td;
  cout<<"Area of Square => "<<td.area(10)<<endl;
  cout<<"Area of Rectangle => "<<td.area(10,20)<<endl;
}
