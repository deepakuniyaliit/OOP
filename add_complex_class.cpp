#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void set_data();
    complex calculate_data(complex);
    void display_data();
};

void complex :: set_data()
{
    cin>>a>>b;
}

complex complex :: calculate_data(complex c)
{
    complex add;
    add.a = a + c.a;
    add.b = b + c.b;
    return(add);
}

void complex :: display_data()
{
    cout<<"Your complex number is : "<<a<<" "<<b;
}

int main()
{
    complex c1, c2, c3;
    cout<<"Enter first complex number : ";
    c1.set_data();
    cout<<"Enter second complex number : ";
    c2.set_data();
    c3 = c1.calculate_data(c2);
    c3.display_data();
    return 0;
}