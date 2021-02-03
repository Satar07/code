#include <iostream>
#include <cstdio>
using namespace std;
int lib[100][500],a[10],n,tt;
bool b[500];
char c[500];


bool check(int s){
	for (int i=1;i<=tt;i++){
		if(lib[s][i]==c[a[s]]){
			if(s==n)return true;
			else {
				check(s+1);
			}
		}
	}
	if(s==1)return false;
}



void bp(int s){
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			b[i]=1;
			a[s]=i;
			if(s==n and !check(1)){
				tt++;
				for(int k=1;k<s;k++)
					printf("%c",c[a[k]]);
				printf("%c\n",c[a[s]]);
				
				for(int k=1;k<=s;k++){
					lib[tt][k]=c[a[k]];
				}
				
			}
			else {
				bp(s+1);
			}
			
			b[i]=0;
			a[s]=0;
		}
	}
}


int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>c[i];
	bp(1);
	return 0;
} 
