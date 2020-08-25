#include<iostream>
#include"Gradebook.h"
using namespace std;

int main(){
  Gradebook gb1("OOP With C++");
  Gradebook gb2("Cyber Security");

  cout<<"Gradebook 1 created for course "<<gb1.getCourseName()<<endl;
  cout<<"Gradebook 2 created for course "<<gb2.getCourseName()<<endl;
}
