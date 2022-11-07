#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[10];
bool visited[10];

void dfs(int k) {

	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	else {
		for (int i = 1; i <= N; i++) {
			if (!visited[i]) {  // 방문 X
				visited[i] = true;  // 방문 표시
				arr[k] = i; 
				dfs(k + 1); // M까지 
				visited[i] = false; // 백트래킹 설정
			}
		}
	}
}

int main() {

	cin >> N >> M;
	dfs(0);

	return 0;

}
