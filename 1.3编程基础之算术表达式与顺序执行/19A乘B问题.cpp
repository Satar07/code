#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

long a, b;
long res;

void PurseIn() {
	cin >> a >> b;
}

int Core() {
	res = a * b;
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
