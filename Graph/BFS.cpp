// BFS(Breadth-First-Search): 너비 우선 탐색

void bfs(int node) {
	visit[node] = true;
	q.push(node);
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (int next = 0; next < N; next++) {
			if (!visit[next] && graph[cur][next]) {
				visit[next] = true;
				q.push(next);
			}
		}
	}
}
