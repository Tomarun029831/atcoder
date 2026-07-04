#include <stdio.h>

int A[61],dp[61][10001]; // dp[i][j]: A1 からAi までを使って、合計jを作れるか
int main(){
	int N,S; scanf("%d %d",&N,&S);
	for(int i=1;i<N+1;++i) scanf("%d",A+i);
	dp[0][0]=1;
	for(int i=1;i<N+1;++i){
		for(int j=0;j<S+1;++j){
			dp[i][j] = dp[i-1][j] || // これから追加するカードAiが目標値jより大きく場合は追加する前にjを作れているなら作れる
					((j<A[i]) ? 0 : dp[i-1][j-A[i]]); // これから追加するカードの整数分引いた数が作れているか
		}
	}

	printf("%s\n", dp[N][S] ? "Yes" : "No");
	return 0;
}
