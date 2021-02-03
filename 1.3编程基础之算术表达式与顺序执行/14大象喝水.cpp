#include <iostream>
#include<stdio.h>
using namespace std;

const double pi = 3.14159;
double r, v, h, n;


void solve() {
	
	n = 20000;
	cin >> h >> r;
	v = pi * r * r * h;
	n = int(n / v) + 1;
	cout << n;
}

int main() { 
	solve();
	return 0;
}
