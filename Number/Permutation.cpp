// Permutation
// (1,2,3) (1,3,2) (2,3,1) (2,1,3) (3,2,1) (3,1,2) => 모두 다른 것으로 취급

void Permutation(int cnt) {
    if (cnt == 3) {
        return;
    }
    
    for(int i = 0; i < 5; i++) {
        if(visit[i]) continue;
        visit[i] = true;
        Permutation(cnt+1);
        visit[i] = false;
    }
}
