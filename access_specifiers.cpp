#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
private:
  int year;
public:
  void setYear(int year){
    if (year > 0 && year < 5){
      year = year;
    }
    else{
      cout<<"Assign some valid value.";
    }
  }
  int getYear(){
    return year;
  }
};

//main function starts here
int main(){
  GradeBook gb;
  gb.setYear(2);
  cout<<gb.getYear()<<endl;
  gb.setYear(4);
  cout<<gb.getYear()<<endl;
}
