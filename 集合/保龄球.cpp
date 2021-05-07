#include <bits/stdc++.h>
using namespace std;

inline int in(){
    int num,c;
    while ((c=getchar())==' ' or c=='\n' or c=='\r');
    num=c-'0';
    while (isdigit(c=getchar()))num=num*10+c-'0';
    return num;
}

int main() {
    unordered_map<int ,int> ds;
    int n=in();
    for (int i = 1; i <= n; ++i) {
        ds[in()]=i;
    }
    int q=in();
    for (int i = 0; i < q; ++i) {
        int temp=in();
        if (ds.find(temp)!=ds.end()){
            cout<<ds[temp]<<endl;
            //ds.erase(temp);
        }else{
            cout<<0<<endl;
        }
    }
}
