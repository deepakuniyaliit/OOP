#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void floatingPointPrecision(){
  double root = sqrt(2.0);
  int places; //0-9
  cout<<fixed;
  for(places=0; places<=9; ++places){
    cout.precision(places);
    cout<<root<<endl;
  }
  
  for(places=0; places<=9; ++places){
    cout<<setprecision(places);
    cout<<root<<endl;
  }
}

void fieldWidth(){
  int x = 10000;
  cout<<x<<endl;

  cout<<showbase<<setw(10)<<x<<endl;
  cout<<left<<setw(10)<<x<<endl;
  cout<<right<<setw(10)<<x<<endl;//By default
  cout<<internal<<setw(10)<<hex<<x<<endl;

  cout<<left;

  cout.fill('*');

  cout<<setw(10)<<dec<<x<<endl;

  cout<<left<<setw(10)<<setfill('%')<<x<<endl;
  cout<<internal<<setw(10)<<setfill('^')<<hex<<x<<endl;

  int widthValue=4;
  char sentence[10];

  cout<<"Enter a sentence"<<endl;
  cin.width(5);
  cout.fill('*');
  while(cin>>sentence){
    cout.width(widthValue++);
    cout<<sentence<<endl;
    cin.width(5);
  }
}

int main(){
  floatingPointPrecision();
  //fieldWidth();
}
