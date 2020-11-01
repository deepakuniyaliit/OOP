#include<iostream>
#include<exception>
using namespace std;

void throwException(){
	try{
		cout<<"Function throwException throws an Exception"<<endl;
		throw exception();

	}
	catch(exception &){
		cout<<"Exception handled in function throwException"<<endl;
		cout<<"It will rethrow exception for further processing"<<endl;
		throw; //rethrow exception for further processing
	}

	cout<<"This will never be printed"<<endl;
}

int main(){
	try{
		cout<<"Call throwException"<<endl;
		throwException();
		cout<<"This will never be printed"<<endl;
	}
	catch(exception &){		//catch exception
		cout<<"Rethrown exception caught in main function"<<endl;
	}
	cout<<"Program continues after catch in main."<<endl;
}