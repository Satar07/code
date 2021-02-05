#include<iostream>
#include<cmath>
using namespace std;
#define NOW_X move_x[i]+x
#define NOW_Y move_y[i]+y

int a[500][500], lib[500][500];
int R, C, res = 0;
int move_x[4]{ 1,0,-1,0 }, move_y[4]{ 0, 1, 0, -1 };

int dfs(int x, int y) {
	if (lib[y][x])return lib[y][x];
	lib[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		if (NOW_X > 0 && NOW_X <= C && NOW_Y > 0 && NOW_Y <= R && a[NOW_Y][NOW_X] < a[y][x]) {
			dfs(NOW_X, NOW_Y);
			lib[y][x] = max(lib[NOW_Y][NOW_X] + 1, lib[y][x]);
		}
	}
	return lib[y][x];
}

int main() {
	cin >> R >> C;
	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
			cin >> a[i][j];
	for (int i = 1; i <= R; i++)
		for (int j = 1; j <= C; j++)
			res = max(dfs(j, i), res);
	cout << res;
}