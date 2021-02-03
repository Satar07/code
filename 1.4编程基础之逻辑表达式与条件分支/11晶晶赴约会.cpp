#include <iostream>
using namespace std;

int main(){
	int i;
	cin>>i;
	switch (i){
		case 1:
		case 3:
		case 5:
			cout<<"NO";
			return 0;
		default:
			cout<<"YES";
			return 0;
	}
}
