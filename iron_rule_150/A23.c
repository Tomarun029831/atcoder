#include <stdio.h>

#define INF 101
int A[101], dp[101][1<<10]; // dp[i][j]: 1~iのクーポンで、jのビットに対応するの品物を取得するときに必要なクーポンの枚数
			    // dp[i][j] = min(dp[i][j], dp[i-1][j]) 		      クーポンを新たに加えないほうが最小枚数を構成できるならそうする
			    // dp[i][j | A[i]] = min(dp[i-1][j] + 1, dp[i][j | A[i]]) 一枚追加するときそれを使用した方が最小枚数を構成できるならそうする
int main(){
	int N,M; scanf("%d %d", &N,&M);
	for(int i=1;i<M+1;++i)
		for(int j=0;j<N;++j){
			int input; scanf("%d",&input);
			A[i] |= (input << j);
		}

	for(int i=0;i<M+1;++i)
		for(int j=0;j<(1<<N);++j)
			dp[i][j]=INF;
	dp[0][0]=0;

	for(int i=1;i<M+1;++i)
		for(int j=0;j<(1<<N);++j){
			dp[i][j] = (dp[i][j]<dp[i-1][j]) ? dp[i][j] : dp[i-1][j];
			dp[i][j|A[i]] = (dp[i-1][j]+1 < dp[i][j|A[i]]) ? dp[i-1][j]+1 : dp[i][j|A[i]];
		}

	printf("%d\n", dp[M][(1<<N)-1] == INF ? -1 : dp[M][(1<<N)-1]);
	return 0;
}
