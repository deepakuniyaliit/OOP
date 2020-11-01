#include<iostream>
using namespace std;

int main(){
  int x=-10;
  cout<<"Before try Block - Will Always Executed"<<endl;
  try{
    if(x<0){
      throw x;
      cout<<"After Throw - Will never be executed"<<endl;
    }
  }
  catch(int x){
    cout<<"Exception Caught"<<endl;
  }

  cout<<"After Catch - Will always executed"<<endl;
}
