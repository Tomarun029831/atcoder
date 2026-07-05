#include <stdio.h>

/*
dp[i][j]: iからjのブロックが並べられたときの合計得点の最大値
dp[i][j]=max(dp[i+1][j] + (i<P[i] && P[i]<j+1) ? A[i] : 0,
		dp[i][j-1] + (i-1<P[j] && P[j]<j) ? A[j] : 0)

*/

int max(int a, int b){ return (a>b)?a:b; }

int P[2001], A[2001], dp[2001][2001];
int main(){
	int N; scanf("%d",&N);
	for(int i=0; i<N; ++i) scanf("%d %d",P+i,A+i);
	for(int i=1;i<N;++i)
		for(int j=i+1;j<N+1;++j)
			dp[i][j]=max(dp[i+1][j] + ((i<P[i] && P[i]<j+1) ? A[i] : 0),
					dp[i][j-1] + ((i-1<P[j] && P[j]<j) ? A[j] : 0));
	printf("%d\n",dp[1][N]);

	return 0;
}
