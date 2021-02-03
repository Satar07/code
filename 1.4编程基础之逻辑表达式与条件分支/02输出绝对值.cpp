#include <iostream>
int main() { 
	float a;
	std::cin >> a;
	if (a < 0)a = -a;
	printf("%.2f", a);
}
