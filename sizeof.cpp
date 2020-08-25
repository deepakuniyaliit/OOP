#include<iostream>
#include<string>
using namespace std;

class Student{
public:
int getAge(){
return age;
}

private:
int age;
int x;
//string name;
};

int main(){
Student st;
cout<<sizeof(st)<<endl;
cout<<sizeof(string)<<endl;
}
