#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long A, B, C;


int power(long long A, long long B, long long C) {
	if (B == 0) {
		return 1;
	}

	else if(B == 1) {
		return A%C;
	}

	else if (B % 2 == 0) {
		long long tmp = power(A, B / 2, C);
		return tmp * tmp % C;
	}

	else {
	
		return A * power(A, B - 1, C) % C;
	}
}


int main() {
	cin >> A >> B >> C;
	cout << power(A, B, C) << "\n";
	
	return 0;
}
