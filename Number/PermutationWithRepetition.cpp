// Permutation with repetition
// 순열+(1,1,1) (2,2,2) (3,3,3)

void Permutation(int cnt) {
    if (cnt == 3) {
        return;
    }
    
    for(int i = 0; i < 5; i++) {
        visit[cnt] = arr[i];//cnt번에 방문한 값은 arr[i]
        Permutation(cnt+1);
    }
}
