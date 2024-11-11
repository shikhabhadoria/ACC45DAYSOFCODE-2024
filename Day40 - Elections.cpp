#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int X;
        cin >> X;
        int A[N];
        int B[N];
        vector < int > gap;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                count++;
            }
            else {
                gap.push_back(B[i] - A[i]);
            }
        }
        if (count > N / 2) {
            cout << "Yes" << endl;
        }
        else {
            sort(gap.begin(), gap.end());
            int m = gap.size();
            for (int i = 0; i < m; i++) {
                if (X >= 0) {
                    X -= (gap[i] + 1);
                    if(X >= 0){
                        count++;
                    } 
                    else{
                        break;
                    }
                }
            }
            if (count > N / 2) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}