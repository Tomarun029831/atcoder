#include <stdio.h>

int A[101][11], dp[101][11]; // dp[i][j]: 1~iのクーポンで、1~jの品物を取得可能なら1そうでないなら0
			     // dp[i][j] = dp[i-1][j] ||		  // クーポンiを加えるときクーポン1~i-1で品物jまで買えるなら買える
			     // 		(dp[i-1][j-1] && A[i][j]) // そうでないなら既に1~j-1まで変えていて追加するクーポンがjを買えるなら買える
int main(){
	int N,M; scanf("%d %d",&N,&M);
	for(int j=1;j<M+1;++j)
		for(int i=1;i<N+1;++i)
			scanf("%d", *(A+j)+i);
	for(int i=0;i<M+1;++i) dp[i][0]=1;
	for(int j=1;j<N+1;++j) dp[1][j]=(dp[1][j-1] && A[1][j]);

	for(int i=2;i<M+1;++i)
		for(int j=1;j<N+1;++j)
			     dp[i][j] = (dp[i-1][j] || (dp[i-1][j-1] && A[i][j]));
	for(int i=1;i<M+1;++i)
		if(dp[i][N]){
			printf("%d\n",i);
			return 0;
		}

	printf("-1\n");
	return 0;
}
