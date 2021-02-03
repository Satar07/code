#include<iostream>
using namespace std;

struct node{
	int data;
	node *pre,*next;
};

node *head,*p,*q,*r;

void insert(node *head,int _data,int beforeThisIndex){
	node *s,*p;
	int j=0;
	p=head;
	while (p->next!=NULL and j<beforeThisIndex)
		p=p->next,j++;
	if(p==NULL)cout<<"no this position";
	else {
		s=new node;
		s->data=_data;
		s->pre=p->pre;
		p->pre=s;
		s->next=p;
		p->pre->next=s;
	}
}

void _delete(node *head,int afterThisIndex){
	int j=0;
	node *p;
	p=head;
	while(p->next!=NULL and j<afterThisIndex)
		p=p->next,j++;
	if(p==NULL)
		cout<<"no this position";
	else {
		p->pre->next=p->next;
		p->next->pre=p->pre;
		free(p);
	}
}



int main(){
	return 0;
}
