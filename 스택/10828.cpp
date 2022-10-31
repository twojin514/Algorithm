#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	stack <int> a;
	int result;
	int integer;
	string str;


		for (int i = 0; i < N; i++) {
			cin >> str;
			if (str == "push") {
				cin >> integer;
				a.push(integer);
			}
			else if (str == "pop") {
				if (a.size() == 0) {
					result = -1;
					cout << result << "\n";
				}
				else {
					result = a.top();
					cout << result << "\n";
					a.pop();
				}
			}

			else if (str == "top") {
				if (a.size() == 0) {
					result = -1;
					cout << result << "\n";
				}
				else
				cout << a.top() << "\n";
			}

			else if (str == "size") {
				cout << a.size() << "\n";
			}

			else if (str == "empty") {
				cout << a.empty() << "\n";
			}
	}
	return 0;

}
