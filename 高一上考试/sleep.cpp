#include<iomanip>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;
int a[1001],n,m;

int main(){
    //freopen("sleep.in", "r", stdin);
	//freopen("sleep.out", "w", stdout);
	cin>>n>>m;
    for(int i=n;i<=m;i++){
        int j=i;
        while(j>0){
            a[j%10]++;
            j/=10;
        }
    }
    for(int i=0;i<=9;i++){
       cout<<a[i]<<" ";
    }
}
