// 우선순위 큐 정렬하기

class com {
	public:	bool operator() (const pair<pair<int, int>, int> a, const pair<pair<int, int>, int> b) {
		if (a.second == b.second) {
			if (a.first.first == b.first.first)
				return a.first.second > b.first.second;
			else
				return a.first.first > b.first.first;
		}			
		else
			return a.second > b.second;
	}
};

priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, com> pq;
