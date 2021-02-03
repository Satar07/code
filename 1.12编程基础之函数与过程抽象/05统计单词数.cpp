#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int len_start,len_now,times_all=0,ans=0,ans_first=0x7fffffff;

char start[1000001],now[1000001];

void if_ok(int now_){
    if((now_==0 or now[now_-1]==' ')&&(now[now_+len_start]==0||now[now_+len_start]==' '))
    {
        bool if_add=true;
        for(int i=0;i<len_start;i++)
        {
            if(now[now_+i]==start[i]) continue;
            if_add=false;
            break;
        }
        if(if_add)
        {
            ans++;
            ans_first=min(ans_first,now_);
        }
    }
}

inline void char_(char &char__){
    if(char__>='A'&&char__<='Z') char__+=32;
}

int main(){
    gets(start);
    gets(now);
    len_start=strlen(start),len_now=strlen(now);
    for(int i=0;i<len_start;i++) char_(start[i]);
    for(int i=0;i<len_now;i++) char_(now[i]);
    //printf("%s\n",start);
    //printf("%s\n",now);
    for(int i=0;i<=len_now-len_start;i++)
    {
        if(now[i]==start[0]) if_ok(i);
    }
    if(ans==0) printf("-1\n");
    else printf("%d %d\n",ans,ans_first);
    return 0;
}
