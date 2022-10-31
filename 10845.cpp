#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	queue <int> q;
	int N;
	string str;
	int result;
	int num;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") {
			cin >> num;
			q.push(num);
		}
		else if(str=="pop"){
			if (q.size() == 0){
				result = -1;
				cout << result << "\n";
			}
			else {
				result = q.front();
				cout << result << "\n";
				q.pop();
			}
		}
		else if (str == "size") {
			result = q.size();
			cout << result << "\n";
		}
		else if (str == "empty") {
			result = q.empty();
			cout << result << "\n";
		}
		else if (str == "front") {
			if (q.empty() == 1) {
				result = -1;
				cout << result << "\n";
			}
			else{
				result = q.front();
				cout << result << "\n";
			}
		}
		else if (str == "back") {
			if (q.empty() == 1) {
				result = -1;
				cout << result << "\n";
			}
			else {
				result = q.back();
				cout << result << "\n";
			}
		}
	}
	return 0;
}