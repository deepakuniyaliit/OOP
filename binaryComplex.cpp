#include<iostream>
using namespace std;

class Complex{
public:
	friend Complex operator+(Complex const &, Complex const &);
	Complex(int r=0, int i=0){
		real=r;
		img = i;
	}

	void print(){
		cout<<real<<" +i"<<img<<endl;
	}

	// Complex operator+(Complex const &obj){
	// 	Complex result;
	// 	result.real = real + obj.real;
	// 	result.img = img + obj.img;
	// 	return result;
	// }

private:
	int real, img;
};

Complex operator+(Complex const &obj1, Complex const &obj2){
	// Complex result;
	// result.real = obj1.real + obj2.real;
	// result.img = obj1.img + obj2.img;
	// return result;

	return Complex(obj1.real + obj2.real, obj1.img + obj2.img);
}

int main(){
	Complex c1(10,5), c2(2,4);
	Complex c3 = c1 + c2;
	c1.print();
	c2.print();
	c3.print();
}
