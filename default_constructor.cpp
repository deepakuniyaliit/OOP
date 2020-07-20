#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
private:
  string courseName;
  int year;

public:
  GradeBook(){
    courseName = "CSE";
    year = 1;
  }

  string getCourseName(){
    return courseName;
  }

  void setCourseName(string courseName){
    this->courseName = courseName;
  }

  int getYear(){
    return year;
  }

  void setYear(int year){
    this->year = year;
  }
};

//main function starts here
int main(){
  GradeBook gb1;
  cout<<"Object 1 Before Changes"<<endl;
  cout<<gb1.getCourseName()<<" => "<< gb1.getYear()<<endl;
  gb1.setCourseName("EC");
  gb1.setYear(3);
  cout<<"Object 1 After Changes"<<endl;
  cout<<gb1.getCourseName()<<" => "<< gb1.getYear()<<endl;
  GradeBook gb2;
  cout<<"Object 2 Before Changes"<<endl;
  cout<<gb2.getCourseName()<<" => "<< gb2.getYear()<<endl;
  gb2.setCourseName("Mechanical");
  gb2.setYear(4);
  cout<<"Object 2 After Changes"<<endl;
  cout<<gb2.getCourseName()<<" => "<< gb2.getYear()<<endl;
}
