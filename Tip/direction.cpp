/***************************************
범위를 벗어나면 방향을 바꿀때 유용한 팁!
****************************************/
int dir[5][2] = { {0,0},{-1,0},{1,0},{0,1},{0,-1} };

// 1 위
// 2 아래
// 3 왼
// 4 오

int change(int d) {
	if (d == 1) return 2;
	if (d == 2) return 1;
	if (d == 3) return 4;
	if (d == 4) return 3;
}

bool range(int nr, int nc) {
	return nr >= 1 && nr <= R && nc >= 1 && nc <= C;
}

int main(){
  nr = r + dir[d][0];
  nc = c + dir[d][1];

  if (!range(nr, nc)) {
    d = change(d);
  }

  r += dir[d][0];
  c += dir[d][1];
}
