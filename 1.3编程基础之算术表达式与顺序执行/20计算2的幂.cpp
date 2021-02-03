#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

long a;
long res = 1;

void PurseIn() {
	cin >> a ;
}

int Core() {
	for (int i = 1; i <= a; i++) {
		res = res * 2;
	}
	return 0;
}

void WriteOut() {
	cout << res;
} 

int main() { 
	PurseIn();
	Core();
	WriteOut();
	return 0;
}
