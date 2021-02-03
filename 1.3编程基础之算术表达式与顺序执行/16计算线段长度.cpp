#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;


double Xa,Xb,Ya,Yb;

int solve() {
	cin >> Xa >> Ya >> Xb >> Yb;
	double dist = 0;
	dist = sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
	printf("%.3f", dist);
	return 0;
}

int main() { 
	solve();
	return 0;
}
