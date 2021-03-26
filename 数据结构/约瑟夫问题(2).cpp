#include<bits/stdc++.h>
using namespace std;

list <int> a;
//list <int> :: iterator index[107];

int main(){
	int n,m,cc=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		a.push_back(i);
	list <int> :: iterator it,now;
	it=a.begin();
	while(!a.empty()){
		cc++;
		now=it;
		if(++it == a.end()) it=a.begin();
		if(cc==m){
			cout<<*now<<' ';
			a.erase(now);
			cc=0;
		}
	}
	cout<<endl<<a.max_size();
	return 0;
}
