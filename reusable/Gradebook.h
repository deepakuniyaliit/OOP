#include<iostream>
using namespace std;

class Gradebook{
public:
  Gradebook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
private:
  string courseName;
};
