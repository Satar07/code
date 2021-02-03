#include<iostream>
#include<cstdlib>
using namespace std;

struct stu{
	int no,ch,ma,en;
	int tol;
};
stu a[10001];

int comp(const void* p1,const void* p2){
	stu* c=(stu*)p1;
	stu* d=(stu*)p2;
	if(c->tol!=d->tol)return d->tol - c->tol;
	else if(c->ch!=d->ch)return d->ch - c->ch;
	else return c->no - d->no;
}

int main(){
	int n,m,temp,cc=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i].ch>>a[i].ma>>a[i].en;
		a[i].no=i;
		a[i].tol=a[i].ch+a[i].ma+a[i].en;
	}
	
	qsort(a,n,sizeof(a[0]),comp);
	
	for(int i=0;i<5;i++){
		cout<<a[i].no+1<<' '<<a[i].tol<<endl;
	}
}
