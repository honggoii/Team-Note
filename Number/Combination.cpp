// Combination
// (1,2,3) (1,3,2) (2,3,1) (2,1,3) (3,2,1) (3,1,2) => 같은 것으로 취급

void Combination(int idx, int cnt) {
    if (cnt == 3) {
        return;
    }
    
    for(int i = idx; i < 5; i++) {
        if(visit[i]) continue;
        visit[i] = true;
        Combination(i, cnt+1);
        visit[i] = false;
    }
}
