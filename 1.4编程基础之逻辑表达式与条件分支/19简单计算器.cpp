#include<iostream>
using namespace std;

int main(){
	int a,b,res;
	char c;
	cin>>a>>b>>c;
	switch(c){
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			if(b == 0){
				cout<<"Divided by zero!";
				return 0;
			}
			res = a / b;
			break;
		default:
			cout <<"Invalid operator!";
			return 0;
	}
	cout<<res;
}
