// 다익스트라 알고리즘은 최단 경로를 구할 때 사용한다.
// 이때, "최단"을 보장하기 위해 간선에 부여된 가중치는 음수가 될 수 없다.

// 다익스트라 알고리즘은 한 정점을 방문하고, 방문한 정점과 인접한 정점들의 거리를 갱신하면서 경로를 갱신하면서 최단 경로를 구하게 된다.
// 경로를 갱신할 때는 2가지를 비교하여 최소값으로 갱신한다.
//  1. 현재 저장된 거리
//  2. 직전에 방문한 노드에 저장된 거리 + 그 노드와 나와의 거리

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
for (int i = 0; i < m; i++) {
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		vec[a].push_back({ w, b });
	}

pq.push({ 0, st});
while (1) {
		int cur = pq.top().second;
		int w = pq.top().first;
		pq.pop();
		if (visit[cur]) continue;
		
		visit[cur] = true;
		cost[cur] = w;

		if (cur == des)
			break;//탈출 조건

		for (int i = 0; i < vec[cur].size(); i++) {
      int node = vec[cur][i].second;
			int c = vec[cur][i].first;

			pq.push({ cost[cur]+c, node });
    }
}
