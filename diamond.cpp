#include<iostream>
using namespace std;

class Person{
public:
  Person(int value){
    cout<<"Person Called "<<value<<endl;
  }

  Person(){
    cout<<"Default Person Called"<<endl;
  }
};

class Student:virtual public Person{
public:
  Student(int value):Person(value){
    cout<<"Student Called "<<value<<endl;
  }
};

class Faculty:virtual public Person{
public:
  Faculty(int value):Person(value){
    cout<<"Faculty Called "<<value<<endl;
  }
};

class TA:public Student, public Faculty{
public:
  TA(int value):Student(value), Faculty(value), Person(value){
    cout<<"TA Called "<<value<<endl;
  }
};

int main(){
  TA ta(10);
}
