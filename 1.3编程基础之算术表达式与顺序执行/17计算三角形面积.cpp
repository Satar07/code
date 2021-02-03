#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;


double Xa,Xb,Xc,Ya,Yb,Yc;

//x x y y
double distant(double a, double b,double c,double d) {
	double res = sqrt((a - b) * (a - b) + (c - d) * (c - d));
	return res;
}

int solve() {
	cin >> Xa >> Ya >> Xb >> Yb >> Xc >> Yc;
	double dist = 0;
	double p = 0;
	double a, b, c;
	a = distant(Xa, Xb, Ya, Yb);
	b = distant(Xa, Xc, Ya, Yc);
	c = distant(Xb, Xc, Yb, Yc);
	p = (a+b+c) / 2;
	double _res = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2f", _res);
	return 0;
}

int main() { 
	solve();
	return 0;
}
