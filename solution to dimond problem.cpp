/*
The "diamond problem" is an ambiguity that arises when two classes for example, B and C inherit from A, and then class D inherits from both B and C.
Suppose there are four classes A, B, C and D and B & C inherit from class A. Now class B and C contains one copy of all the functions and data members of class A.
After that class D is derived from class B & C and now class D contains two copies of all the functions and data members of class A. One copy comes from class B and another copy comes from class C.
Let’s say class A have a function with name display(), so class D will have two display() functions as explained above. 
If we call display() function using class D object then ambiguity occurs because compiler gets confused that whether it should call display() that came from class B or from class C and 
such program is going to throw some error.
We can remove diamond problem by using virtual keyword in C++. We have made the classes ‘Faculty’ and ‘Student’ as virtual base classes to avoid two copies of Person in TA class.
*/

#include<iostream> 
using namespace std; 
class Person { 
public: 
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   } 
    Person()     { cout << "Person::Person() called" << endl;   } 
}; 
  
class Faculty : virtual public Person { 
public: 
    Faculty(int x):Person(x)   { 
       cout<<"Faculty::Faculty(int ) called"<< endl; 
    } 
}; 
  
class Student : virtual public Person { 
public: 
    Student(int x):Person(x) { 
        cout<<"Student::Student(int ) called"<< endl; 
    } 
}; 
  
class TA : public Faculty, public Student  { 
public: 
    TA(int x):Student(x), Faculty(x)   { 
        cout<<"TA::TA(int ) called"<< endl; 
    } 
}; 
  
int main()  { 
    TA ta1(30); 
} 
