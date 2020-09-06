/*
Overloading Unary Prefix and Postfix Operators
*/
#include<iostream>
using namespace std;

class Complex{
public:
	Complex(int r, int i):real(r), img(i){//Initializer list

	}

	Complex operator++(){//Prefix ++
		++real;
		++img;
		return *this;//reference return
	}

	Complex operator++(int){//Postfix ++
		Complex temp = *this;
		++real;
		++img;
		return temp; //value and not the reference - unincremented value
	}

	void printComplex(){
		cout<<real<<" + "<<img<<"i"<<endl;
	}

private:
	int real, img;
};

int main(){
	Complex c(3,4);
	c.printComplex();
	++c;
	c.printComplex();
	Complex temp = c++;
	temp.printComplex();
	c.printComplex();
}
