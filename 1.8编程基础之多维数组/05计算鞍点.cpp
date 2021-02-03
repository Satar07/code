#include<iostream>
using namespace std;
int a[6][6][4];
int main(){
    int min=0,max=0,temp=0,cc=0;
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            cin >> a[i][j][1];
    for(int i=1;i<=5;i++){
        max=a[i][1][1];
        temp=1;
        for(int j=1;j<=5;j++){
            if(a[i][j][1]>max){
                max=a[i][j][1];
                temp=j;
            }
        }
        a[i][temp][2]=1;
    }
   for(int j=1;j<=5;j++){
        min=a[1][j][1];
        temp=1;
        for(int i=1;i<=5;i++){
            if(a[i][j][1]<min){
                min=a[i][j][1];
                temp=i;
            }
        }
        a[temp][j][3]=1;
    }
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++){
            if(a[i][j][2]==1 and 1==a[i][j][3]){
                cout<<i<<" "<<j<<" "<<a[i][j][1]<<endl;
                cc++;
            }
        }
    if(cc==0)cout<<"not found";
    return 0;
}
