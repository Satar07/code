#include <iostream>
#include<stdio.h>
using namespace std;

string input;

void solve() {
	cin >>input;
	for (int i = input.length()-1;i >= 0;i--) {
		cout << input[i];
	}
}

int main() { 
	solve();
	return 0;
}
