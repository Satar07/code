#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
char a[1001],b[1001];
int main()
{
   gets(a);
   int la=strlen(a);
   for(int i=0;i<la;i++)
    {
        if(a[i]==' ') 
        {
            for(int j=b[0];j>0;j--) cout<<b[j];//������ո�������b[0]=0�����������
            b[0]=0;
            cout<<' ';
        }
        else b[++b[0]]=a[i];
    }
    for(int j=b[0];j>0;j--) cout<<b[j];//�����һ�����˺���û�пո�ִ�д˾����
}
