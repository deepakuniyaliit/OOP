#include<iostream>
using namespace std;

class Point{
private:
  int x, y;

public:
  Point(int x, int y):x(x),y(y){}
  Point(const Point &p2){x = p2.x; y = p2.y;}//Deep Copy
  void printPoint(){
    cout<<"x = "<<x<<" y = "<<y<<endl;
  }
  // void setX(int x){this->x = x;}
  // void setY(int y){this->y = y;}
};

int main(){
  Point p2(3,4); //Normal Default Constructor
  Point p1=p2;//Copy Constructor
  cout<<"P2 = ";
  p2.printPoint();
  cout<<"P1 = ";
  p1.printPoint();
  // cout<<"After Change "<<endl;
  // p2.setX(10);
  // p2.printPoint();
  // p1.printPoint();
}
