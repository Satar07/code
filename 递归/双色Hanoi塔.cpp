#include<iostream>
using namespace std;

void mov(int n,char a,char c,char b){
	if(n==0)return;
	mov(n-1,a,b,c);
	cout<<n<<' '<<a<<' '<<c<<endl;
	mov(n-1,b,c,a);
}


int main(){
	//freopen("hanoi.out","r",stdout);
	int n;
	cin>>n;
	mov(n,'A','B','C');
	//fclose(stdout);
}
