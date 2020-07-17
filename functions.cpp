#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
public:
  void displayMessage(string courseName){
    cout<<"Welcome to the GradeBook and "<<courseName<<endl;
  }
};

int main(){
  GradeBook gb;
  string courseName;
  cout<<"Enter Course Name ";
  cin>>courseName;
  gb.displayMessage(courseName);
}
