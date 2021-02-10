#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int a[200001];

int comp(const void* p1, const void* p2) {
	return *(int*)p1 > *(int*)p2 ? 1 : -1;
}

inline int in() {
	int num = 0;
	char c;
	bool flag = false;
	while ((c = getchar()) == ' ' or c == '\n' or c == '\r');
	if (c == '-')flag = true;
	else num = c - '0';
	while (isdigit(c = getchar()))num = num * 10 + c - '0';
	return (flag ? -1 : 1) * num;
}

int main() {
	int n = in(), res = 0;
	for (int i = 1; i <= n; i++) {
		a[i] = in();
	}
	qsort(a + 1, n, sizeof(a[1]), comp);
	while (1) {
		int j = 1;
		while (!a[j])j++;
		if (j == n)break;
		a[j] += a[j + 1];
		res += a[j];
		for (int i = j + 1; i <= n; i++)
			a[i] = a[i + 1];
		n--;
		for (int i = 1; i < n; i++)
			if (a[i] > a[i + 1])
				swap(a[i], a[i + 1]);
	}
	cout << res;
	return 0;
}