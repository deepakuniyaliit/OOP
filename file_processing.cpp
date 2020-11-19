#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

void writeData(){
  string enrollment;
  string name;
  string phone;
  int age;

  ofstream fileOut("students.txt", ios::out);
  //ofstream fileOut("students.txt", ios::app);
  //ofstream fileOut("students.txt");

  if(!fileOut){
    cerr << "File couldn't openend" << endl;
    exit(1);
  }

  cout<<"Enter the Enrollment, Name, Phone No and Age"<<endl;
  cout<<"Enter end-of-file (EOF) to end the input"<<endl;

  while(cin>>enrollment>>name>>phone>>age){
    fileOut<<enrollment<<" "<<name<<" "<<phone<<" "<<age<<endl;
  }
  fileOut.close();
}

void readData(){
  string enrollment;
  string name;
  string phone;
  int age;
  //Principle of the least privilege
  ifstream fileIn("students.txt", ios::in);
  if(!fileIn){
    cerr << "File couldn't openend" << endl;
    exit(1);
  }

  cout<<left<<setw(15)<<"Enrollment"<<setw(10)<<"Name"<<setw(12)<<"Phone No"<<setw(3)<<"Age"<<endl;

  while(fileIn>>enrollment>>name>>phone>>age){
    cout<<left<<setw(15)<<enrollment<<setw(10)<<name<<setw(12)<<phone<<setw(3)<<age<<endl;
  }
}

int main(){
  writeData();
  readData();
}
