#include<iostream>
using namespace std;

//Program-1

int main(){
	int a, b, c=0;
	cin>>a>>b;
	try{
		if(b==0){
			throw b;
		}
		c = a/b;	//divide a by b
	}
	catch(int exp){
		cout<<"Division By Zero Not Accepted!";
	}
	
	cout<<c<<endl;
}

//Program-2
int main(){
	int a, b, c=0;
	cin>>a>>b;
	try{
		if(b==0){
			throw "DivisionByZeroException";;
		}
		c = a/b;	//divide a by b
	}
	catch(const char* c){
		cout<<c<<endl;
	}
	
	cout<<c<<endl;
}

//Program-3
int main(){
	int x[2] = {-1, 2};
	for(int i=0; i<2; i++){
		int e = x[i];
		try{
			if(e > 0){
				throw e;
			}
			else{
				throw 'e';
			}
		}
		catch(int i){
			cout<<"Integer Exception"<<endl;
		}

		catch(char c){
			cout<<"Char Exception"<<endl;
		}
		catch(...){
			cout<<"Exception Caught..."<<endl;
		}
	}
}