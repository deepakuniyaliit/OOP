#include<iostream>

using namespace std;

class Student
{
    public:
    int rollno;
    string name;
    Student()
    {
     cout<<"default constructor is called : "<<endl;
    }
    // first constructor
    Student(int x)
    {
        rollno = x;
        name = "None";
    }
    // second constructor
    Student(int x, string str)
    {
        rollno = x;
        name = str;
    }
};

int main()
{
    // student A initialized with roll no 10 and name None
    Student A(10);

    // student B initialized with roll no 11 and name John
    Student B(11, "John");

    Student s;
}
