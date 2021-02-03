#include<iostream>
#include<cstdlib>
using namespace std;

struct stu{
	int no,ch,ma,en;
	int tol;
};
stu a[10001];

int comp(const void* p1,const void* p2){  //p1>p2 -> 1  p1=p2 -> 0  p1<p2 -> -1
	stu* a=(stu*)p1;
	stu* b=(stu*)p2;
	if(a->tol!=b->tol)return a->tol-b->tol;
	else if(a->ch!=b->ch)return a->ch-b->ch;
	else return a->no-b->no;
}

int main(){
	int n,m,temp,cc=0;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i].ch>>a[i].ma>>a[i].en;
		a[i].no=i;
		a[i].tol=a[i].ch+a[i].ma+a[i].en;
	}
	
	qsort(a,n,sizeof(a[0]),comp);
	
	for(int i=n;i>n-5;i--){
		cout<<a[i].no<<' '<<a[i].tol<<endl;
	}
}



