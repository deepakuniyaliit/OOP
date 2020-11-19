#include<iostream>
#include<fstream>
using namespace std;
int main(){
  fstream file("students.txt", ios::in | ios::out | ios::trunc);
  cout<<"tellg pointer - "<<file.tellg()<<endl;
  cout<<"tellp pointer - "<<file.tellp()<<endl;
  file<<"Hello World";
  cout<<"tellg pointer - "<<file.tellg()<<endl;
  cout<<"tellp pointer - "<<file.tellp()<<endl;

  file.seekg(6,ios::beg);
  cout<<"tellg pointer - "<<file.tellg()<<endl;
  cout<<"tellp pointer - "<<file.tellp()<<endl;

  char A[10];
  file.read(A,10);
  A[9]=0;
  cout<<"Content- "<<A<<endl;
  file.close();
}
