#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    int list[26] = { 0 };
    int score = 0;

    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if ('a' <= word[i] && word[i] <= 'z') {
            score = word[i] - 'a';
            list[score]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << list[i] << " ";
    }

    return 0;
}