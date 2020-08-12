#include<iostream>
using namespace std;

class Student{
public:
  static int noOfDepts;

  static void setCount(int c){
    count=c;
  }

  static int getCount(){
    return count;
  }

  static string getUniversity(){
    return university;
  }

private:
  static int count;

protected:
  static string university;
};

int Student::noOfDepts=10;
int Student::count=5000;
string Student::university="IIT";

int main(){
  Student st1;
  Student st2;
  cout<<"No. Of Depts "<<Student::noOfDepts<<" "<<endl;
  cout<<"Count "<<Student::getCount()<<" "<<endl;
  cout<<"University "<<Student::getUniversity()<<" "<<endl;

  cout<<"Student-1 "<<st1.getCount()<<endl;
  cout<<"Student-2 "<<st2.getCount()<<endl;
  st1.setCount(6000);
  cout<<"Student-1 after Change "<<st1.getCount()<<endl;
  cout<<"Student-2 after Change "<<st2.getCount()<<endl;
}
