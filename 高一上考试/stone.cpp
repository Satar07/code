#include<bits/stdc++.h>
using namespace std;

int d,n,m,a[500010];

//���Ա�scanf��һ��� ��������������
inline int in(){
	int num=0;
	char c;
	bool flag=false;
	while ((c=getchar())==' ' or c=='\n' or c=='\r');  //��ȡǰ�ָ��� ѭ�������װ��������
	if (c=='-')flag=true;                              //��������ѽ
	else num=c-'0';
	while (isdigit(c=getchar()))
		num=num*10+c-'0';                             //��λ����
	return (flag?-1:1)*num;                           //��Ѹ�������
}

//judge������x����ǰ���ֳ����Ĵ�
//cc�������������¼�Ե�ǰ����Ҫ���ߵ�ʵ��ʯͷ��
bool judge(int x){               //�ж��Ƿ�Ϸ��ƿ�ʯͷ
	int cc=0,now=0,next=0;       //x������Ŀ����̾���
	while(next<n+1){
		next++;
		if(a[next]-a[now]<x){    //��Ŀ��ҪС ����һ��Ҫ�ƿ� ��������һ
			cc++;                //�ж��ɹ��������ʯͷ���ߣ�����������һ��ʯͷ
			continue;
		}
		now=next;                //�ж�ʧ�ܣ����ʯͷ�������ߣ����Ǿ�����ȥ���ٿ�����һ��
	}
	if(cc>m)return false;
	return true;
}


int main(){
	//freopen("stone.in","r",stdin);
	//freopen("stone.out","w",stdout);
	int l,r,mid,res;
	
	d=in();                //d�����ܳ��ȣ�Ҳ�����ұ߽�
	n=in();                //n��ʯͷ
	m=in();                //��������m�飬˼����ʱ��ɱ����m����
	for(int i=1;i<=n;i++)
		a[i]=in();
	a[n+1]=d;             //�úڰ廮�ص㣬��ǿ��һ�飬n�����յ�
	
	l=1,r=d;              //���ַ�
	while(l<=r){
		mid=(r+l)/2;
		if(judge(mid)){
			res=mid;
			l=mid+1;
			continue;    //�ߵ���������ǿ��н⣬���ǳ��Կ����ǲ����и��õĿ��н�
  		}
		r=mid-1;         //�棬�����˸��Ƿ��⣬�Ͻ��ص����߿�����û�п��н�
	}

	cout<<res;           //����ans���������Ž�
}
