#include<iostream>
#include"Gradebook.h"
using namespace std;

  Gradebook::Gradebook(string name){
    setCourseName(name);
  }

  void Gradebook::setCourseName(string name){
    courseName = name;
  }

  string Gradebook::getCourseName(){
    return courseName;
  }

  void Gradebook::displayMessage(){
    cout<<"Welcome you to the course "<<getCourseName()<<" !"<<endl;
  }
