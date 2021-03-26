#include<iostream>
int c[101];
int main(){
    int n,s,h,a,b,i,t=0; 
    std::cin>>n>>s>>h>>i;
	h+=i;
    for(i=1;i<=n;i++){
        std::cin>>a>>b;
        if(a<=h)c[b]++;
    }
    for(i=0;i<=100&&s>=0;i++){
        while(c[i]){
            s-=i;
            t++;
            c[i]--;
            if(s<0){
                t--;
                break;
            }
        }
    }
    std::cout<<t;
    return 0;
}
