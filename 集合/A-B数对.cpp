#include <bits/stdc++.h>

using namespace std;

int a[200002];

inline int in(){
    int num,flag=1,c;
    while ((c=getchar())==' ' or c=='\n' or c=='\r');
    if (c=='-'){
        flag=-1;
        c=getchar();
    }
    num=c-'0';
    while (isdigit(c=getchar()))num=num*10+c-'0';
    return flag*num;
}

int main(){
    unordered_map<int ,int > ds;
    long long n=in(),c=in(),ans=0;
    for (int i = 0; i < n; ++i) {
        a[i]=in();
        ds[a[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        ans+=ds[a[i]-c];
    }
    cout<<ans;
    return 0;
}