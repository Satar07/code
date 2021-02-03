#include<cstdio>
#include<cstdlib>
using namespace std;

int a[10001][2];

int comp(const void *p1,const void *p2){
	return ((int*)p1)[0]-((int*)p2)[0];
}

int find(int aim,int last){
	for(int i=0;i<last;i++){
		if(a[i][0]==aim)return i;
	}
	return -1;
}

int main(){
	int n,i=0,temp;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		scanf("%d",&temp);
		int flag=find(temp,i);
		if(flag==-1){
			a[i][0]=temp;
			a[i][1]=1;
			i++;
		}
		else{
			a[flag][1]++;
		}
	}
	
	qsort(a,i,sizeof(int)*2,comp);
	
	for(int k=0;k<=i-1;k++){
		printf("%d %d\n",a[k][0],a[k][1]);
	}
	return 0;
}
