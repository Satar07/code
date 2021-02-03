#include<iostream>
#include<cstdio>
using namespace std;

int n,res;

//第几个数 算上这个数字已经到多少了 不算这个数字又是多少 记录前驱数 记录符号(0-> +  1-> -)
void dfs(int tt,int the_res,int pre_res,int last_num,int sign){
	if(tt==10){
		 if(the_res==n)res++;
		 return;
	}
	//剪枝..不需要
	dfs(tt+1,the_res+tt,the_res,tt,0);
	dfs(tt+1,the_res-tt,the_res,tt,1);
	dfs(tt+1,sign==0?(pre_res+last_num*10+tt):(pre_res-(last_num*10+tt)),pre_res,last_num*10+tt,sign);
}


int main(){
	//freopen("equation.in","r",stdin);
	//freopen("equation.out","w",stdout);
	cin>>n;
	dfs(2,1,0,1,0);
	cout<<res;
}
