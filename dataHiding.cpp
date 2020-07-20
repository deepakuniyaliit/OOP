#include<iostream>
#include<string>
using namespace std;

//GradeBook class definition

class GradeBook{
private:
  int age;
public:
  int getAge(){
    return age;
  }

  void setAge(int age){
    if (age > 0){
      this->age = age;
    }
  }
};

//main function starts here
int main(){
  GradeBook gb;
  gb.setAge(-1);
  cout<<gb.getAge()<<endl;
}
