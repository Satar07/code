#include <iostream>
#include<stdio.h>
using namespace std;


int n, x, y;

int solve() {
	cin >> n >> x >> y;
	int rate;
	if (y % x == 0) {
		rate = y / x;
		cout << n - rate;
		return 0;
	}
	rate = y / x + 1;
	int rest = n - rate;
	cout << rest;
	return 0;
}

int main() { 
	solve();
	return 0;
}
