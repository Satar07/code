#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int a, b, n;
int res = 0;

void PurseIn() {
	cin >> a >> b >> n;
}

int Core() {
	res =a + (b-a) * (n-1);
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
