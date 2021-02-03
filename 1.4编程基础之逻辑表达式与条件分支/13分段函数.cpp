#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
	double x,y = 0.0;
	cin>>x;
	if (x<10){
		if (x<5){
			y = -x+2.5;
		}
		else
			y = 2 - 1.5*(x-3)*(x-3);
	}
	else
		y = x/2-1.5;
	printf("%.3f",y);
}
