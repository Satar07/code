#include<bits/stdc++.h>
using namespace std;


inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}


struct node{
    int s, t;
};


{//∂®“Â 
	queue<node>ship;
	node h;
	int n, t, k, x;
	int nation[1000005];
	int ans;
}


int main(){
	n=in();
	for(int i=1;i<=n;i++){
		t=in(),k=in();
		while( (!ship.empty()) and t-(ship.front()).t>=86400){
			nation[(ship.front()).s]--;
			if(!nation[(ship.front()).s])ans--;
			ship.pop();
		}
		h.t=t;
		for(int j=1;j<=k;j++){
			h.s=in();
			ship.push(h);
			nation[h.s]++;
			if(nation[h.s]==1)ans++;
		}
		cout<<ans<<endl;
	}
	
}

