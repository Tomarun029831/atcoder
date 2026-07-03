#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, Q, *sum_A;
	scanf("%d %d", &N, &Q);
	sum_A=calloc(N+1, sizeof(int)); 
	if(sum_A == NULL) return 1;
	sum_A[0]=0;
	for(int i=1; i<N+1; ++i){
		int input;
		scanf("%d", &input);
		sum_A[i] = sum_A[i-1] + input;
	}
	for(int i = 0; i<Q; ++i){
		int L,R;
		scanf("%d %d", &L, &R);
		printf("%d\n", sum_A[R] - sum_A[L-1]);
	}

	return 0;
}
