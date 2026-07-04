#include <stdio.h>

int A[2][101], dp[101][100001]; // dp[i][j]: iが種類数, jが重さ
int main(){
	int N,W; scanf("%d %d", &N,&W);
	for(int i=1;i<N+1;++i){
		int w,v; scanf("%d %d",&w,&v);
		for(int j=w;j<W+1;++j){
			dp[i][j] = (j<w) ? dp[i-1][j] :
					(dp[i-1][j]>(dp[i-1][j-w] + v)) ? dp[i-1][j] : (dp[i-1][j-w] + v);
		}
	}

	printf("%d\n", dp[N][W]);
	return 0;
}
