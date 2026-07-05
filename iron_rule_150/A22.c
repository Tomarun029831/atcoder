#include <stdio.h>

int A[100001], B[100001];// マスiにいるときA[i]に進むなら100点, マスiにいるときB[i]に進むなら150点
int dp[100001];	// dp[i]: マスiに到着したときの得点の最大値
		// dp[A[i]] = max(dp[A[i]], dp[i] + 100)
		// dp[B[i]] = max(dp[B[i]], dp[i] + 150)
int main(){
	int N; scanf("%d", &N);
	for(int i=2;i<N+1;++i) dp[i] = -1;
	for(int i=1;i<N;++i) scanf("%d",A+i);
	for(int i=1;i<N;++i) scanf("%d",B+i);

	for(int i=1;i<N;++i){
		if(dp[i] == -1) continue;
		dp[A[i]] = (dp[A[i]]>(dp[i]+100)) ? dp[A[i]] : (dp[i]+100);
		dp[B[i]] = (dp[B[i]]>(dp[i]+150)) ? dp[B[i]] : (dp[i]+150);
	}

	printf("%d\n", dp[N]);
	return 0;
}
