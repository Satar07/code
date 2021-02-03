#include<iostream>
#include<cstring>
using namespace std;

int lib[301][301],n,mymax;
bool lv[301];
int rec[301],res[301];

void dfs(int tt,int num){//位置 人数
	if(tt==n+1){  //边界
		if(num>mymax){
			mymax=num;
			for(int i=1;i<=n;i++)res[i]=rec[i];
		}
		return;
	}
	//
	bool flag=true;
	for(int i=1;i<tt;i++){
		if(rec[i] and lib[tt][i]){
			flag=false;
			break;
		}

	}
	if(flag){
		rec[tt]=1;
		dfs(tt+1,num+1);
		rec[tt]=0;
	}
	dfs(tt+1,num);
}

int main(){
	cin>>n;
	int t,x,y;
	cin>>t;
	for(int i=1;i<=t;i++) {
		cin>>x>>y;
		lib[x][y]=lib[y][x]=1;
	}
	dfs(1,0);
	cout<<mymax<<endl;
	for(int i=1;i<=n;i++)cout<<res[i]<<' ';
	
}
