// 위상정렬은 DAG(Directed Acyclic Graph)에서 모든 vertex를 정렬하는 것이다.
// 의미 그대로 방향성이 있고(Directed) 순환하지 않는(Acyclic) 그래프(Graph)를 말한다. 

//위상정렬의 구현 방법은 다음과 같다.
// 1. 각 vertex에 indegree를 저장한다.
// 2. indegree가 0인 vertex를 모두 큐에 넣는다.
// 3. 큐가 빌때까지 다음을 반복한다.
//    3-1. 큐에서 하나 꺼낸다.
//    3-2. 큐에서 꺼낸 vertex와 연결된 vertex를 찾아 indegree를 1 감소한다.
//    3-3. indegree가 0인 vertex를 큐에 넣는다.

// 1. 각 vertex의 현재 indegree 저장
	for (int i = 0; i < m; i++) {
		int a, b;//a->b
		scanf("%d%d", &a, &b);
		v[a].push_back(b);//연결
		indegree[b]++;//b에는 indegree가 1 증가
	}

	// 2. indegree가 0인 vertex모두 enqueue
	for (int i = 1; i <= n; i++) {
		if (indegree[i] == 0)
			q.push(i);
	}
	
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		printf("%d ", cur);
		for (int i = 0; i < v[cur].size(); i++) {
			indegree[v[cur].at(i)]--;//indegree 1감소
			if (indegree[v[cur].at(i)] == 0) {
				q.push(v[cur].at(i));//indegree가 0이면 enqueue
			}
		}
	}
