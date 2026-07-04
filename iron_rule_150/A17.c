#include <stdio.h>

int A[100001],B[100001],dp[100001],prev[100001],path[100001];
int main(){
        int N; scanf("%d",&N);
        for(int i=2;i<N+1;++i) scanf("%d",A+i); // Ai: room i-1 to room i (2<=i<=N)
        for(int i=3;i<N+1;++i) scanf("%d",B+i); // Bi: room i-2 to room i (3<=i<=N)

	dp[1]=0;dp[2]=A[2]; // dp[i]: 1からiへの最小コスト
	prev[1]=0; prev[2]=1; // prev[i]=a: aからiへ　の意
	for(int i=3;i<N+1;++i){
		const int pathA = dp[i-1]+A[i];
		const int pathB = dp[i-2]+B[i];
		dp[i] = (pathA<pathB) ? pathA : pathB;
	}

	int cnt=0;
	for(int i=N,j=0; i>0;++j){
		path[j]=i;
		++cnt;
		if(dp[i-1]+A[i] == dp[i]) i-=1;
		else i-=2;
	}
	printf("%d\n", cnt);
	for(int i=cnt-1;i>=0;--i) printf("%d ", path[i]);
	puts("");
	return 0;
}
