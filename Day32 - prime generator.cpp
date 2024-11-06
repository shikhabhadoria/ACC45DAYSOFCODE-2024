#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int m;
        cin >> m;
        int n;
        cin >> n;
        for (int i = m; i <= n; i++) {
            if (isprime(i)) {
                cout << i << endl;
            }
        }


    }

}