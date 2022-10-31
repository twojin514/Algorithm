#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	while (true) {

		stack<char> s;
		string str;
		getline(cin, str);
		bool flag = 0;

		if (str == ".") {
			break;
		}


		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = 1;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					flag = 1;
					break;
				}
			}

		}

		if (flag==0&&s.empty()==1) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}

	}

	return 0;
}
