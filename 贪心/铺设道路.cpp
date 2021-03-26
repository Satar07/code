#include<iostream>
int a[100001],arr[100001];
int main(){
	int n,ans=0;
	std::cin>>n;
	for(int i=1;i<=n;i++){
		std::cin>>a[i];
	}
	ans=a[1];
	for(int i=1;i<n;i++){
		if(a[i]<a[i+1])ans+=a[i+1]-a[i];		
	}
	std::cout<<ans;
}
