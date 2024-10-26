#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int fing[N];
        int sheath[N];
        for (int i = 0; i < N; i++) {
            cin >> fing[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> sheath[i];
        }

        if (N == 1) {
            if (fing[0] <= sheath[0]) {
                cout << "both" << endl;
                continue;
            }
            else {
                cout << "none" << endl;
                continue;
            }
        }

        bool isfront = true;
        bool isback = true;

        for (int i = 0; i < N; i++) {
            if (fing[i] > sheath[i]) {
                isfront = false;
            }
            if (fing[i] > sheath[N - 1 - i]) {
                isback = false;
            }
        }

        if (isfront == true && isback == true) {
            cout << "both" << endl;
        }
        else if (isfront == true && isback == false) {
            cout << "front" << endl;
        }
        else if (isfront == false && isback == true) {
            cout << "back" << endl;
        }
        else {
            cout << "none" << endl;
        }
    }

}