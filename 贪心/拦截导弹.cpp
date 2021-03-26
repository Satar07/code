#include<iostream>
#include<cstdlib>
int arr[1002];
int main(){
	int x=0,ans=0;
	register int i=0;
	while(std::cin>>x){
		if(arr[ans]<x){
			arr[++ans]=x;
		}
		else{
			i=ans;
			while(arr[i]>x)i--; //贪心 找到能打到但是能射最低的一组 
			i++;                //其实二分可以更快 但是我懒 
			arr[i]=x;
			while(arr[i]<arr[i-1]){            //重新排列 
				std::swap(arr[i],arr[i-1]);
				i--;
			}
		}
	}
	std::cout<<ans;
	return 0;
}
