#include <stdio.h>

long long dp[100001]; // dp[j]: 総重量がj以下であるような組み合わせで作れる最大価値
int main(){
	int N,W;scanf("%d %d",&N,&W);
	for(int i=0;i<N;++i){
		int w; long long v; scanf("%d %lld",&w,&v);
		for(int j=W;j>w-1;--j){
			const long long next_v = dp[j - w] + v;
			if (next_v > dp[j]) dp[j] = next_v;
		}
	}
	printf("%lld\n", dp[W]);
	return 0;
}
