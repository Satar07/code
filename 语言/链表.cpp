#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	node *next;
};
node *head,*p,*r;

void getdata(node *head,int i){
	node *p;int j;
	p=head->next;
	j=1;
	while(p!=NULL and j<i)
		p=p->next,j++;
	if(p!=NULL and j==i)
		cout<<p->data;
	else
		cout<<"i do not exsit";
}

void insert(node *head,int _data,int beforeThisIndex){
	node *p,*s;int j;
	p=head;
	j=0;
	while(p!=NULL and j<beforeThisIndex-1){
		p=p->next;
		j++;
	}
	if(p==NULL)cout<<"no this position!";
	else {
		s=new node;
		s->data=_data;
		s->next=p->next;
		p->next=s;
	}
}

void _delete(node *head,int afterThisIndex){
	node *p,*s;int j=0;
	p=head;
	while(p->next!=NULL and j<afterThisIndex-1){
		p=p->next;
		j++;
	}
	if(p->next==NULL)
		cout<<"no this position!";
	else{
		s=p->next;
		p->next=p->next->next;       //好家伙，就套娃
		free(s); 
	}
}

int len(node *head){
	int n=0;
	p=head;
	while(p!=NULL){
		p=p->next;
		n++;
	}
	return n;
}

int main(){
	int x;
	cin>>x;
	head=new node;
	r=head;
	while (x!=-1){
		p=new node;
		p->data=x;
		p->next=NULL;
		r->next=p;  //建立连接 
		r=p;
		cin>>x;
	}
	p=head->next;
	do{
		cout<<p->data<<' ';
		p=p->next;
	}while(p->next!=NULL);
	cout<<endl;
	int max=0,min=10000000;
	p=head->next;
	while(p->next!=NULL){
		if(p->data>max){
			max=p->data;
			cout<<"new max:"<<max<<endl;
		}
		if(p->data<min){
			min=p->data;
			cout<<"new min:"<<min<<endl;
		}
		p=p->next;
	}
	
	do{
		cout<<endl<<"input i:"; 
		cin>>x;
		if(x<=0)break;
	    getdata(head,x);
	}while (true);
}
