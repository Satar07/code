#include<bits/stdc++.h>
using namespace std;
const int MAX=1000001;

int lib[MAX];

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int main(){
	//freopen("in.in","r",stdin);
	//freopen("out.out","w",stdout);
	priority_queue<vector<int> > a;
	priority_queue<int> time;
	vector<int> temp;
	int n=in(),t,k,nation,cc=0,mymax;
	for(int p=1;p<=n;p++){
		t=in(),k=in();
		while(time.size()>0 and a.size()>0 and t-time.top()>=86400){
			time.pop();
			for(vector<int>::iterator it=(a.top()).begin();it!=(a.top()).end();it++){
				lib[*it]--;
			}
			//cout<<"_____pop it!________\n";
			a.pop();
		}
		
		temp.resize(0);
		for(int i=1;i<=k;i++){
			nation=in();
			mymax=max(mymax,nation);
			lib[nation]++;
			temp.push_back(nation);
		}
		a.push(temp);
		time.push(t);
		
		cc=0;
		for(register int i=1;i<=mymax;i++)
			if(lib[i])cc++;
		cout<<cc<<endl;
	}
}
