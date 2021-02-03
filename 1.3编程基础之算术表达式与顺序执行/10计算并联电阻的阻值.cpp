#include <iostream>
#include<stdio.h>
using namespace std;

float r1, r2;

void solve() {
	cin >> r1 >> r2;
	float R = 1 / (1 / r1 + 1 / r2);
	printf("%.2f", R);
}

int main() { 
	solve();
	return 0;
}
