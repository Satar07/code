#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

double check(double in){
	if (in == 0)in = 0.0;
	return in;
}

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(b* b==4.0 * a * c){
		printf("x1=x2=%.5f",check((-b + sqrt(b*b-4*a*c)))/check((2*a)));
	}
	else if(b* b>4.0 * a * c){
		printf("x1=%.5f;x2=%.5f",check((-b + sqrt(b*b-4*a*c))/(2*a)),check((-b - sqrt(b*b-4*a*c))/(2*a)));
	}
	else{
		printf("x1=%.5f+%.5fi;x2=%.5f%.5fi",check(-b / (2*a)),check(sqrt(4*a*c-b*b) / (2*a)),check(-b / (2*a)),check(-sqrt(4*a*c-b*b) / (2*a)));
	}
}
