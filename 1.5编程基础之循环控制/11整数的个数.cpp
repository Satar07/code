#include<iostream>
using namespace std;

int main(){
	int n,c1,c5,c10;
	c1=c5=c10=0;
	cin>>n;
	for (int i=0;i<n;i++){
		int in;
		cin>>in;
		if (in == 0)continue;
		if (in == 1)c1++;
		if (in%10 == 0)c10++;
		else if (in%5 == 0)c5++;
	}
	cout<<c1<<endl<<c5<<endl<<c10;
}
