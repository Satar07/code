#include<iostream>
using namespace std;

int room[200],dict[1010];
int M,N,look;

bool if_found(int word){
	if(dict[word]==1)return true;
	return false;
}

int turn(int Fword,int Bword){
	if(look<=M-1){
		dict[Bword]=1;
	}
	else if(look>=M){
		dict[Fword]=0;
		dict[Bword]=1;
	}
	look++;
	return 1;
	
}

int main(){
	cin>>M>>N;
	int j=1,now,temp;
	for(int i=1;i<=N;i++){
		j=(j==M+1)?1:j;
		cin>>now;
		if (if_found(now)) continue;
		else{
			temp=room[j];
			room[j]=now;
			turn(temp,room[j]);
			j++;
		}
	}
	cout<<look;
}
