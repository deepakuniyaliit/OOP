#include<iostream>
using namespace std;

void modifyArray(const int [], int);
void modifyElement(int);
void printArray(int [], int);


int main(){
  const int arraySize = 5;
  int a[arraySize] = {0,1,2,3,4};
  cout<<"Before Modification"<<endl;
  printArray(a,arraySize);
  modifyArray(a,arraySize);
  cout<<"After Modification"<<endl;
  printArray(a,arraySize);
  modifyElement(a[2]);
  printArray(a,arraySize);
}

void modifyArray(int array[], int arraySize){
  for(int k=0; k < arraySize; k++){
    array[k] *= 2;
  }
}

void modifyElement(int element){//pass by value
  element *= 2;
  cout<<element<<endl;
}
void printArray(int array[], int arraySize){
  for(int k=0; k < arraySize; k++){
    cout<<array[k]<<" ";
  }
  cout<<endl;
}
