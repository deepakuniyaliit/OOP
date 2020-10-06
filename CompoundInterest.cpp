#include<iostream>
#include<math.h> 
using namespace std;
int main()
{
	float p,r,t,compound;
	
	cout<<"Enter Principle, Rate and Time:\n";
	cin>>p>>r>>t;
	
	compound=p*pow((1+r/100),t);
	
	cout<<"\nCompound Interest = "<<ci;
 
	return 0;
}
