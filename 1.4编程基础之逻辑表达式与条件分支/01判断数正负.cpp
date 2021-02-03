#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int a;


void PurseIn() {
	cin >> a ;
}

int Core() {
	if (a > 0)
		cout << "positive";
	else if (a < 0)
		cout << "negative";
	else
		cout << "zero";
	return 0;
}

void WriteOut() {
	
} 

int main() { 
	PurseIn();
	Core();
	WriteOut();
	return 0;
}
