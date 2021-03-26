#include<bits/stdc++.h>
using namespace std;
inline int in(){
	int num;
	char c;
	while((c=getchar())==' ' or c=='\r' or c=='\n');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}
int main(){
	int n=in(),q=in(),opt=0,i=0,j=0,k=0;
	vector<vector<int> >locker(n-1);
	while(q--){
		opt=in();
		if(opt==1){
			i=in(),j=in(),k=in();
			if(locker[i].size()<j+1)
				locker[i].resize(j+1);
			locker[i][j]=k;
		}
		else{
			i=in(),j=in();
			cout<<locker[i][j]<<endl;
		}
	}
}









