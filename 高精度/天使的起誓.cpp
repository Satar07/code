#include <iostream>
#include <cstring>
using namespace std;
const int N =1001;
int aa[N],bb[N],cc[N]; //�����������������
 
void inputNum(string ss,int a[]); //������Ҫ����������浽����
void printArr(int a[]);  //��������Ԫ��
void jian(int a[],int b[]);
void jisuan(int a[],int b[],int c[]);
void movei(int a[],int b[],int i);
 
int compare (int a[],int b[]); //�Ƚ������߾�������С
 
int main()
{
    string s1 ;
    string s2 ;
    cin>>s1>>s2;
    
    inputNum(s1,bb);
	inputNum(s2,aa);
    
    jisuan(aa,bb,cc);
    if(aa[0]==0){
 		cout<<s1;
 		return 0;
 	}
    printArr(aa); 
    return 0;
}
int compare (int a[],int b[])
{
    int i;
    if (a[0]>b[0]) return 1;
    if (a[0]<b[0]) return -1;
    for (i=a[0];i>0;i--)
    {
        if (a[i]>b[i]) return 1;
        if (a[i]<b[i]) return -1;
    }
    return 0;
}
 
void movei(int a[],int b[],int j)
{
    for (int i=1;i<=a[0];i++)
    {
        b[i+j-1] =a[i];
    }
    b[0] = a[0]+j-1;
}
 
void jisuan(int a[],int b[],int c[])
{
  c[0] = a[0]-b[0]+1; //�ϵ�λ�� 
  int temp[1001]; //��ʱ���飬���ڶԳ��������ƶ�
  for (int i=c[0];i>0;i--) 
  {
      memset(temp,0,sizeof(temp)); //ȫ��Ϊ0
      movei(b,temp,i);  //��λ����
        while (compare(a,temp)>=0)
      {
          c[i]++; //ÿ�μ�1
        jian(a,temp);
      }
  }
  int m=c[0];
  while (c[0]>0 && c[m]==0) //�����̵�λ��
  {
     c[0]--;
  }
    
}
 
 
void jian(int a[],int b[])
{
    for (int i=1;i<=a[0];i++)
    {
        if (a[i]<b[i])
        {
            a[i+1]--;
            a[i]+=10;
        }
        a[i]-=b[i];
    }
    int i=a[0];
    while (a[i]==0)
    {
        i--;
    }
    a[0]=i;
}
 
void inputNum(string ss,int a[])
{
    int len = ss.length();
    a[0] = len;
    for (int i=0;i<len;i++)
    {
        a[len-i] = ss[i] -48;//�ַ�������֣����ҵ���洢
    }
}
void printArr(int a[])
{
 	
    for (int i=a[0];i>0;i--)
    {
        cout<<a[i];
    }
}
