#include <stdio.h>

/*

dp[i][j]: マス(1,1)からマス(i,j)へ最小何手で到着できるか
dp[1][1] = 0
dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + 1

(K - dp[N][N]) が0または正の整数でかつ偶数ならK手で到着可能,そうでないなら不可能

*/

long long dp[1000000001][1000000001];
int main(){
	long long N,K; scanf("%lld %lld",&N,&K);
	for(long long int i=0; i<N+1; ++i)
		for(long long int j=0; j<N+1; ++j)
			dp[i][j]=K+1;
	dp[1][1]=0;

	for(long long int i=1; i<N+1; ++i)
		for(long long int j=1; j<N+1; ++j)
			dp[i][j] = ((dp[i-1][j] < dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1]) + 1;

	puts(((dp[N][N]<=K) && !((K-dp[N][N])&1)) ? "Yes" : "No" );


	return 0;
}
