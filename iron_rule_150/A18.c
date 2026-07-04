#include <stdio.h>

int dp[10001]; // dp[j]: 合計jを作れるか
int main(){
	int N,S; scanf("%d %d",&N,&S);
	dp[0]=1;
	for(int i=0;i<N;++i){
		int A; scanf("%d",&A);
		for(int j=S;j>A-1;--j) dp[j] |= dp[j-A]; // 既にjが作れているか、これから追加するするカードの値を引いた数が作れているか
	}

	printf("%s\n", dp[S] ? "Yes" : "No");
	return 0;
}
