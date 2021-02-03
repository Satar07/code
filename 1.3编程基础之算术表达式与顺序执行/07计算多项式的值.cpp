#include <iostream>
#include<stdio.h>
using namespace std;

void solve() {
	double a,b,c,d,x;
	cin >> x>>a >> b>>c>>d;
	printf("%.7f",a*x*x*x+b*x*x+c*x+d);
	
}

int main() {
	solve();
	return 0;
}
