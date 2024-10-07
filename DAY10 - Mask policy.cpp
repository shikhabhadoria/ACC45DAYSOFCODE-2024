#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int A;
	    cin>>A;
	    int mini = 0;
	    int nA = N - A;
	    mini = min(nA , A);
	    cout<<mini<<endl;
	}

}
