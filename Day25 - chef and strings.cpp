#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin>>T;
    while (T--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        long long count = 0;
        for(int i = 0; i<N-1; i++){
            count += abs(arr[i+1]-arr[i])-1;
        }
        cout<<count<<endl;
    }
}