// DFS(Depth-First-Search): 깊이 우선 탐색

// 재귀함수(메모리 스택)를 이용
void dfs(int node) {
	visit[cur] = true;
	for (int next = 0; next < N; next++)
		if (!visit[next] && graph[cur][next])
			dfs(next);
}

// stack 이용
void dfs(int node) {
	st.push(node);
	while (!st.empty()) {
		int cur = st.top(); st.pop();
		if (visit[cur]) continue;
		visit[cur] = true;
		for (int next = 0; next < N; next++) {
			if (!visit[next] && graph[cur][next])
				st.push(next);
		}
	}
}
