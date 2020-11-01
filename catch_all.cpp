#include<iostream>
using namespace std;

int main(){
  try{
    throw 10;
  }
  catch(char *c){
    cout<<"Exception Caught"<<endl;
  }
  catch(...){
    cout<<"Default Exception Caught"<<endl;
  }
}
