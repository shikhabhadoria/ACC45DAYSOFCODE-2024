#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int L[N];
        int R[N];
        for (int i = 0; i < N; i++) {
            cin >> L[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> R[i];
        }
        int index = 0;
        for (int i = 1; i < N; i++) {

            if (L[index] * R[index] < L[i] * R[i]) {
                index = i;
            }
            else if (L[index] * R[index] == L[i] * R[i]) {
                if (R[index] < R[i]) {
                    index = i;
                }
                else if (R[index] == R[i]) {
                    index = min(i, index);
                }
            }
            
        }

        cout << index + 1 << endl;
    }

}