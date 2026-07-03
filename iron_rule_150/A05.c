#include <stdio.h>

int main(){
	int N, K, cnt=0;
	scanf("%d %d", &N, &K);
	for(int i=1; i<=N; ++i){
		for(int j=1; j<=N; ++j){
			const int l=K-i-j;
			if(l<1 || N<l) continue;
			++cnt;
		}
	}
	printf("%d\n", cnt);

	return 0;
}
