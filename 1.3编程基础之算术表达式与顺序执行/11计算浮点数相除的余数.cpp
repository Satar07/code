#include <iostream>
#include<stdio.h>
using namespace std;

double a, b;

void solve() {
	cin >> a >> b;
	double k = int(a/b);
	double res = a - k * b;
	printf("%g", res);
}

int main() { 
	solve();
	return 0;
}
