#include<iostream>
using namespace std;

int main(){
  try{
    throw 'a';
  }
  catch(int x){
    cout<<"Exception Caught"<<endl;
  }
  catch(...){
    cout<<"Default Exception Caught.."<<endl;
  }
}
