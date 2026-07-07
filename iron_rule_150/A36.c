#include <stdio.h>

/*

dp[i][j]: マス(1,1)からマス(i,j)へ最小何手で到着できるか
dp[1][1] = 0
dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + 1

(K - dp[N][N]) が0または正の整数でかつ偶数ならK手で到着可能,そうでないなら不可能

*/

int main(){
	long long N,K; scanf("%lld %lld",&N,&K);
	const long long min_step = 2 * (N-1);

	puts(((min_step<=K) && !((K-min_step)&1)) ? "Yes" : "No" );


	return 0;
}
