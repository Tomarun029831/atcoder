#include <stdio.h>
:wa

long long dp[101][100001]; // dp[i][j]: iが種類数, 重さがちょうどjとなる時の最大価値
int main(){
	int N,W; scanf("%d %d", &N,&W);
	for(int i=0;i<N+1;++i)
		for(int j=0;j<W+1;++j)
			dp[i][j]=-1000000000000000LL;
	dp[0][0]=0;
	for(int i=1;i<N+1;++i){
		int w; long long v; scanf("%d %lld",&w,&v);
		for(int j=0;j<W+1;++j){
			if(j<w) dp[i][j] = dp[i-1][j];
			else dp[i][j] = (dp[i-1][j]>(dp[i-1][j-w] + v)) ? dp[i-1][j] : (dp[i-1][j-w] + v);
		}
	}

	long long max=0;
	for(int i=0;i<W+1;++i) max = (dp[N][i] > max) ? dp[N][i] : max;
	printf("%lld\n", max);
	return 0;
}
