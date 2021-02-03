#include <iostream>
#include<stdio.h>
using namespace std;

double r;

void solve() {
	cin >>r;
	double res = 4.0 / 3.0 * r * r * r * 3.14;
	printf("%.2f", res);
}

int main() { 
	solve();
	return 0;
}
