#include<iostream>
using namespace std;

class Shape{
public:
   virtual void draw(){
    cout<<"Shape Base Class"<<endl;
  }
};

class Triangle: public Shape{
public:
   virtual void draw(){
    cout<<"Drawing Triangle...."<<endl;
  }

  void print(){
    cout<<"This is Triangle.."<<endl;
  }
};

class Rectangle: public Shape{
public:
   virtual void draw(){
    cout<<"Drawing Rectangle...."<<endl;
  }
};

class Square: public Shape{
public:
   virtual void draw(){
    cout<<"Drawing Square...."<<endl;
  }
};

class Circle: public Shape{
public:
   virtual void draw(){
    cout<<"Drawing Circle...."<<endl;
  }
};

int main(){
  Shape *sp[10];
  Triangle t; //Derived class object
  //t.draw();

  Shape s; //Base class object
  //s.draw();

  Triangle *tptr; //Derived class Pointer
  //tptr->draw();

  Shape *sptr;  //Base class Pointer
  //sptr->draw();

  sptr = &s;    //Aim base class pointer at the base class object
  //sptr->draw();

  tptr = &t;   //Aim derived class pointer at the derived class object
  //tptr->draw();

  sptr = &t;  //Aim base class pointer at the derived class object
  //sptr->draw();
  // sptr->print();

  // tptr = &s;  //Aim derived class pointer at the base class object
  // tptr->draw();

  sp[0] = tptr;
  // sp[0]->draw();
  sp[1] = &t;
  // sp[0]->draw();
  sp[2] = new Triangle();
  // sp[2]->draw();
  sp[3] = new Square();
  sp[4] = new Rectangle();
  sp[5] = new Circle();

  for(int i=0; i<6; i++){
    sp[i]->draw();
  }


}
