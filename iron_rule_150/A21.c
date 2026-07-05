#include <stdio.h>

/*
dp[i][j]: iからjのブロックが並べられたときの合計得点の最大値
dp[i][j]=max(dp[i+1][j] + (i<P[i] && P[i]<j+1) ? A[i] : 0, // iを取り除いた時に得られる得点と
		dp[i][j-1] + (i-1<P[j] && P[j]<j) ? A[j] : 0) // jを取り除いた時に得られる得点のどちらか大きい方
*/

int max(int a, int b){ return (a>b)?a:b; }

int P[2001], A[2001], dp[2001][2001];
int main(){
	int N; scanf("%d",&N);
	for(int i=1; i<N+1; ++i) scanf("%d %d",P+i,A+i);

	for(int w=1;w<N;++w) // 幅 1から2はw=1で移動できる
		for(int l=1,r=l+w;r<N+1;++l,r=l+w)
			dp[l][r]=max(dp[l+1][r] + ((l<P[l] && P[l]<r+1) ? A[l] : 0),
					dp[l][r-1] + ((l-1<P[r] && P[r]<r) ? A[r] : 0));
	printf("%d\n",dp[1][N]);

	return 0;
}
