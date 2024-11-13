#include <bits/stdc++.h>
using namespace std;
int attack(int n , int x , int y){
    int count = 2*(n -1 )
    +min(x-1 , y-1)
    +min(n-x , y-1)
    +min(x-1 , n-y)
    +min(n-x , n-y);
    return count;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int X;
	    cin>>X;
	    int Y;
	    cin>>Y;
	    int num = attack(N , X , Y);
	    cout<<num<<endl;
	}

}
