#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
private:
  string courseName;
  int year;

public:
  //Parameterized Constructor
  GradeBook(string courseName="CSE", int year=1){
    this->courseName = courseName;
    this->year = year;
  }

  string getCourseName(){
    return courseName;
  }

  int getYear(){
    return year;
  }
};

//main function starts here
int main(){
  GradeBook gb1;
  GradeBook gb2("Meachanical", 4);
  cout<<"Object 1 => "<<gb1.getCourseName()<<" => "<< gb1.getYear()<<endl;
  cout<<"Object 2 => "<<gb2.getCourseName()<<" => "<< gb2.getYear()<<endl;
}
