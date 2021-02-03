#include<bits/stdc++.h>
using namespace std;

int d,n,m,a[500010];

//可以比scanf快一点点 在输入中有优势
inline int in(){
	int num=0;
	char c;
	bool flag=false;
	while ((c=getchar())==' ' or c=='\n' or c=='\r');  //读取前分隔符 循环完里边装的是数字
	if (c=='-')flag=true;                              //不能忘记呀
	else num=c-'0';
	while (isdigit(c=getchar()))
		num=num*10+c-'0';                             //进位操作
	return (flag?-1:1)*num;                           //别把负数忘了
}

//judge函数，x代表当前二分出来的答案
//cc代表计数器，记录以当前答案需要移走的实际石头数
bool judge(int x){               //判断是否合法移开石头
	int cc=0,now=0,next=0;       //x是现在目标最短距离
	while(next<n+1){
		next++;
		if(a[next]-a[now]<x){    //比目标要小 所以一定要移开 计数器加一
			cc++;                //判定成功，把这块石头拿走，继续考虑下一块石头
			continue;
		}
		now=next;                //判定失败，这块石头不用拿走，我们就跳过去，再考虑下一块
	}
	if(cc>m)return false;
	return true;
}


int main(){
	//freopen("stone.in","r",stdin);
	//freopen("stone.out","w",stdout);
	int l,r,mid,res;
	
	d=in();                //d代表总长度，也就是右边界
	n=in();                //n块石头
	m=in();                //限制移走m块，思考的时候可别被这个m限制
	for(int i=1;i<=n;i++)
		a[i]=in();
	a[n+1]=d;             //敲黑板划重点，再强调一遍，n不是终点
	
	l=1,r=d;              //二分法
	while(l<=r){
		mid=(r+l)/2;
		if(judge(mid)){
			res=mid;
			l=mid+1;
			continue;    //走到这里，看来是可行解，我们尝试看看是不是有更好的可行解
  		}
		r=mid-1;         //噫，你找了个非法解，赶紧回到左半边看看有没有可行解
	}

	cout<<res;           //最后的ans绝对是最优解
}
