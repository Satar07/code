#include <iostream>
using namespace std;

int main(){
	double in,wa,bi;
	cin>>in;
	wa = in/1.2;
	bi = in/3.0 +27.0+23.0;
	if(wa<bi)cout<<"Walk";
	else if(wa>bi)cout<<"Bike";
	else cout<<"All";
}
