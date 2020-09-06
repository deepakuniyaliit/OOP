#include<iostream>
using namespace std;

int main(){
  int *array = new int[10];
  array[0] = 10;
  array[1] = 20;
  cout<<array[0]<<" "<<array[1]<<endl;
  delete [] array;
}
