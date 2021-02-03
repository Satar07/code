#include <iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;

const float pi = 3.14159;

void solve() {
    double pi = 3.14159;
    double r;
    cin >> r;
    cout << fixed << setprecision(4) << 2 * r << " ";
    cout << fixed << setprecision(4) << 2 * pi * r << " ";
    cout << fixed << setprecision(4) << r * r * pi << endl;

}

int main() { 
	solve();
	return 0;
}
