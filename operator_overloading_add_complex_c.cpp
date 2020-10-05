#include<iostream>
using namespace std;

class complex
{
    int i, r;
    public:
    complex(int a=0, int b=0)
    {i = a; r = b;}
    complex operator+(complex c)
    {
        complex term;
        term.i = i + c.i;
        term.r = r + c.r; 
        return term;
    }
    void show_value()
    {cout<<i<<" "<<r;}
};

int main()
{
    complex c1(-6,3), c2(1,5);
   // complex c3 = c1 + c2;
    complex c3 = c1.operator+(c2);
    c3.show_value();
}