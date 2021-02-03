#include <iostream>
#include <cstring>
using namespace std;
const int N =1001;
int aa[N],bb[N],cc[N]; //定义计算数和输出结果
 
void inputNum(string ss,int a[]); //输入需要计算的数保存到数组
void printArr(int a[]);  //输出数组的元素
void jian(int a[],int b[]);
void jisuan(int a[],int b[],int c[]);
void movei(int a[],int b[],int i);
 
int compare (int a[],int b[]); //比较两个高精度数大小
 
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
  c[0] = a[0]-b[0]+1; //上的位数 
  int temp[1001]; //临时数组，用于对除数进行移动
  for (int i=c[0];i>0;i--) 
  {
      memset(temp,0,sizeof(temp)); //全置为0
      movei(b,temp,i);  //高位对齐
        while (compare(a,temp)>=0)
      {
          c[i]++; //每次加1
        jian(a,temp);
      }
  }
  int m=c[0];
  while (c[0]>0 && c[m]==0) //处理商的位数
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
        a[len-i] = ss[i] -48;//字符变成数字，并且倒序存储
    }
}
void printArr(int a[])
{
 	
    for (int i=a[0];i>0;i--)
    {
        cout<<a[i];
    }
}
