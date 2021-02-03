#include <iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c,res;
	cin>>a>>b>>c;
	res = max(a,max(b,c));
	cout<<res;
}
