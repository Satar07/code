#include<iostream>
#include<cmath>
using namespace std;

int main(){
	 for (int a = 0;a<=7;a++){
	 	for (int b = 0;b<=7;b++){
	 		for (int c = 0;c<=7;c++){
	 			if(a*49+b*7+c==c*81+b*9+a and a!=0){
	 				cout<<a*49+b*7+c<<endl;
	 				cout<<a<<b<<c<<endl<<c<<b<<a<<endl;
	 			}
	 		}
	 	}
	 }
}
