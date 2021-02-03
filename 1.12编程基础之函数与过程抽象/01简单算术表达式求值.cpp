#include<iostream>
using namespace std;

int calculate(int x,char z,int y);

int main()
{
    int x,y;
    char z;

    cin>>x>>z>>y;
    cout<<calculate(x,z,y)<<endl;
    return 0;
}

int calculate(int x,char z,int y)
{
    if(z=='+')	return x+y;
    if(z=='-')	return x-y;
    if(z=='*')	return x*y;
    if(z=='/')	return x/y;
    if(z=='%')	return x%y;
}
