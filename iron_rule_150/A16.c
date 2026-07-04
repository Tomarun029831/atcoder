#include <stdio.h>

int A[100001],B[100001],dp[100001];
int main(){
	int N; scanf("%d",&N);
	for(int i=2;i<N+1;++i) scanf("%d",A+i); // Ai: room i-1 to room i (2<=i<=N)
	for(int i=3;i<N+1;++i) scanf("%d",B+i); // Bi: room i-2 to room i (3<=i<=N)

	dp[1]=0;dp[2]=A[2]; // dp[i]は1からiへ移動するときの最小コスト
	for(int i=3;i<N+1;++i){
		const int pathA=dp[i-1]+A[i];
		const int pathB=dp[i-2]+B[i];
		dp[i]=(pathA<pathB) ? pathA : pathB;
	}

	printf("%d\n",dp[N]);
	return 0;
}
