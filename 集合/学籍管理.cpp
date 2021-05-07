#include <bits/stdc++.h>

using namespace std;

inline int in(){
    int num,c,flag=1;
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
    map<string ,int> ds;
    string name;
    int n=in(),opt,score,ans=0;
    while (n--){
        opt=in();
        switch (opt) {
            case 1:
                cin>>name;
                if (!ds[name])ans++;
                ds[name]=in();
                cout<<"OK\n";
                break;
            case 2:
                cin>>name;
                if (ds[name]) cout<<ds[name]<<endl;
                else cout<<"Not found\n";
                break;
            case 3:
                cin>>name;
                if (ds[name]){
                    ans--;
                    ds[name]=0;
                    cout<<"Deleted successfully\n";
                }
                else cout<<"Not found\n";
                break;
            default:
                cout<<ans<<endl;
        }
    }
    return 0;
}