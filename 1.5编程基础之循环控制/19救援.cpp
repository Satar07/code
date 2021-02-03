#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	double dis,num,x,y;
	double res = 0;
	cin>>n;
	for (int i = 0;i<n;i++){
		cin>>x>>y>>num;
		dis=sqrt(x*x+y*y);
		res += dis/25+3*num/2;
	}
	cout<<ceil(res);
}
