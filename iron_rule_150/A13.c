#include <stdio.h>

long long A[100000];
int main(){
	int N; long long K,cnt=0; scanf("%d %lld",&N,&K);
	for(int i=0;i<N;++i) scanf("%lld", A+i);
	for(int i=0,j=1;i<N-1;++i){
		for(;j<N&&A[j]-A[i]<=K;++j);
		cnt+=(j-1)-i;
	}
	printf("%lld\n", cnt);

	return 0;
}
