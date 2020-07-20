#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
private:
  string courseName;
public:
  void setCourseName(string course){
    courseName = course;
  }

  string getCourseName(){
    return courseName;
  }

  void displayMessage(){
    cout<<"Welcome to the GradeBook and "<<courseName<<endl;
  }
};

//main function starts here
int main(){
  GradeBook gb;
  //gb.courseName = "CSE";
  gb.setCourseName("CSE");
  string course = gb.getCourseName();
  cout<<"Value Returned - "<<course<<endl;
  gb.displayMessage();
}
