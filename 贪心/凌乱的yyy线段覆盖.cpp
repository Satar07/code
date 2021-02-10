#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node {
	int begin, end;
};
node lib[1000001];

int comp(const void* p1, const void* p2) {
	return  (*(node*)p1).end > (*(node*)p2).end ? 1 : -1;
}

int main() {
	int n, now, cc = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> lib[i].begin >> lib[i].end;
	qsort(lib, n + 1, sizeof(lib[0]), comp);
	now = lib[1].end;
	for (int i = 2; i <= n; i++) {
		if (lib[i].begin >= now) {
			cc++;
			now = lib[i].end;
		}
	}
	cout << cc;
	return 0;
}