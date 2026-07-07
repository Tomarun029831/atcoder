#include <stdio.h>

int main(){
	long long N,M,B; scanf("%lld %lld %lld",&N,&M,&B);
	long long sum_A=0,sum_C=0,total_sum=N*M*B;
	for(long long i=0;i<N;++i){
		long long input; scanf("%lld",&input);
		sum_A += input;
	}
	for(long long i=0;i<M;++i){
		long long input; scanf("%lld",&input);
		sum_C += input;
	}
	total_sum += M*sum_A + N*sum_C;
	printf("%lld",total_sum);

	return 0;
}
