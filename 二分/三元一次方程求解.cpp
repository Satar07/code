#include<iostream>
#include<cmath>
#include<cstdio>
#define eps 1e-4
using namespace std;

double a,b,c,d;

double f(double x){
	return a*x*x*x+b*x*x+c*x+d;
}

int main(){
	cin>>a>>b>>c>>d;
	for(int i=-100;i<=100;i++){
		double l=i,r=i+1,mid;
		if(abs(f(l))<eps){
			printf("%.2f ",l);
		}
		else if(abs(f(r))<eps){
			continue;
		}
		else if(f(r)*f(l)<0){
			while(r-l>eps){
				mid=(r+l)/2;
				if(f(mid)*f(r)>0){
					r=mid;
				}
				else{
					l=mid;
				}
			}
			printf("%.2f ",l);
		}
	}
}
