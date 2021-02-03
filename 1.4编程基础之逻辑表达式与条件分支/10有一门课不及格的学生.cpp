#include <iostream>
using namespace std;

int main(){
	int a, b,cc;
	cin>>a>>b;
	cc = 0;
	if (a < 60)cc +=1;
	if (b < 60)cc +=1;
	
	if (cc == 1)cout<<1;
	else cout<<0;
}
