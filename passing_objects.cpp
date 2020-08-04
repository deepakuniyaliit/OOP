#include<iostream>
using namespace std;

class Complex{
public:
  Complex(int v1=0, int v2=0){
    this->v1=v1;
    (*this).v2=v2;
  }

  Complex addObjects(Complex c2){
    Complex temp;
    temp.v1 = v1 + c2.v1;
    temp.v2 = v2 + c2.v2;
    return temp;
  }
  int getV1(){
    return v1;
  }
  int getV2(){
    return v2;
  }
private:
  int v1, v2;
};

int main(){
  Complex c1(2,3);
  Complex c2(3,4);
  Complex t = c1.addObjects(c2);
  cout<<"C1 Object "<<c1.getV1()<<"+"<<c1.getV2()<<"i"<<endl;
  cout<<"C2 Object "<<c2.getV1()<<"+"<<c2.getV2()<<"i"<<endl;
  cout<<"Final Object "<<t.getV1()<<"+"<<t.getV2()<<"i"<<endl;
}
