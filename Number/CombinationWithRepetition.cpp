// CombinationWithRepetition
// 조합 + (1,1,1) (2,2,2) (3,3,3) 

void Combination(int idx, int cnt) {
    if (cnt == 3) {
        return;
    }
    
    for(int i = idx; i < 5; i++) {
        visit[cnt] = arr[i];//cnt번에 방문한 값은 arr[i]
        Combination(i, cnt+1);
    }
}
