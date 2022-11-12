#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[100001] = { 0, };

void binary_search(int N, int key) {
    int start = 0;
    int end = N - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            cout << "1" << "\n";
            return;
        }
        else if (arr[mid] < key) {
            start= mid + 1;
        }
        else if (arr[mid] > key) {
             end= mid-1;
        }
    }
    cout << "0" << "\n";
    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tmp;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        binary_search(N, tmp);
    }

    return 0;

}
