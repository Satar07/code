#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int k;
	string a;
	cin>>a;
	for(int i =0;i<a.size();i++){
		k=0;
		for(int j=0;j<a.size();j++){
			if(a[i]==a[j])k++;
		}
		if(k==1){
			cout<<a[i];
			return 0;
		}
	}
	cout<<"no";
}
