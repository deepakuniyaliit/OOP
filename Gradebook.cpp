#include<iostream>
using namespace std;

class Gradebook{
public:
  Gradebook(string name){
    setCourseName(name);
  }

  void setCourseName(string name){
    courseName = name;
  }

  string getCourseName(){
    return courseName;
  }

  void displayMessage(){
    cout<<"Welcome you to the course "<<getCourseName()<<" !"<<endl;
  }

private:
  string courseName;
};

#include<iostream>
#include"Gradebook.h"
using namespace std;

int main(){
  Gradebook gb1("OOP With C++");
  Gradebook gb2("Cyber Security");

  cout<<"Gradebook 1 created for course "<<gb1.getCourseName()<<endl;
  cout<<"Gradebook 2 created for course "<<gb2.getCourseName()<<endl;
}
