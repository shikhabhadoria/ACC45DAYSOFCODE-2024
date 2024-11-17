#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int T;
	 cin>>T;
	 while(T--){
	     int N;
	     cin>>N;
	     int A[N][N];
	     for(int i = 0; i<N; i++){
	         for(int j = 0; j<N; j++){
	             cin>>A[i][j];
	         }
	         cout<<endl;
	     }
	     
	     int maxi = 0;
	     int sum1 = 0;
	     int sum2 = 0;
	     for(int i = 0; i<N; i++){
	         int x = i; 
	         int y = 0;
	         sum1 = 0;
	         while(x < N && y < N){
	             sum1 += A[x][y];
	             x++;
	             y++;
	         }
	         maxi = max(sum1 , maxi);
	     }
	     
	     for(int j = 0; j<N; j++){
	         int x = 0;
	         int y = j;
	         sum2 = 0;
	         while(x < N && y < N){
	             sum2 += A[x][y];
	             x++;
	             y++;
	         }
	         maxi = max(sum2 , maxi);
	     }
	     
	     cout<<maxi<<endl;
	 }
}
