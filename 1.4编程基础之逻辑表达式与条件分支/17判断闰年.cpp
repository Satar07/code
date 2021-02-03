#include <iostream>
#include<cmath>
using namespace std;

int main(){
	int in;
	cin>>in;
	if (in%4==0){
		if(in%100==0){
			if(in%400==0){
				cout<<"Y";
				return 0;
			}
			cout<<"N";
			return 0;
		}
		cout<<"Y";
		return 0;
	}
	cout<<"N";
	return 0;
}
