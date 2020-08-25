#include<iostream>
using namespace std;

/*
Define a class Count with a data member x,
There will be a friend function, that will modify the value.
*/
class Count{
public:
	//friend class ChangeX;
	Count(int x=0){
		this->x = x;
	}
	
	void print(){
		cout<<"x = "<<x<<endl;
	}
private:
	int x;
};

class ChangeX{
public:
	void setX(Count &counter, int val){
	counter.x = val;
}
};

int main(){
	ChangeX ch;
	Count counter;
	counter.print();
	ch.setX(counter, 10);
	counter.print();
}
