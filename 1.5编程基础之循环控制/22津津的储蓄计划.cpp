#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int have = 0,rece = 0,put = 0;
	for (int i = 1;i<=12;i++){
		int in= 0;
		cin>>in;
		have = have +300 -in;
		if(have <0){
			cout<<"-"<<i;
			return 0;
		}
		if(have>=100){
			put += have-(have%100);
			have = have - (have-(have%100));
		}
	}
	cout<<ceil(put*1.2+have);
	return 0;
}
