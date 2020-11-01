#include<iostream>
#include<stdexcept>
using namespace std;

void function3(){
	cout<<"In function3"<<endl;
	throw runtime_error("runtime_error in function3");
}

void function2(){
	cout<<"function3 is called inside function2"<<endl;
	function3();
}

void function1(){
	cout<<"function2 is called inside function1"<<endl;
	function2();
}

int main(){
	try{
		cout<<"function1 called"<<endl;
		function1();
	}
	catch(runtime_error &error){
		cout<<"Exception occurred: "<<error.what()<<endl;
		cout<<"Exception handled in main function"<<endl;
	}
}