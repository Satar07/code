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
			while(arr[i]>x)i--; //̰�� �ҵ��ܴ򵽵���������͵�һ�� 
			i++;                //��ʵ���ֿ��Ը��� �������� 
			arr[i]=x;
			while(arr[i]<arr[i-1]){            //�������� 
				std::swap(arr[i],arr[i-1]);
				i--;
			}
		}
	}
	std::cout<<ans;
	return 0;
}
