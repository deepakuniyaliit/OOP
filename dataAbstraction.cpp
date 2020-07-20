#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
private:
  string course;
public:
  void setCourseName(string course){
    this->course = course;
  }

  void displayCourseName(){
    cout<<"The Course Name is - ";
    cout<<course<<endl;
  }
};

//main function starts here
int main(){
  GradeBook gb;
  gb.setCourseName("C++");
  gb.displayCourseName();
}
