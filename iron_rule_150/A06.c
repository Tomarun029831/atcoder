#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, Q, *A;
	scanf("%d %d", &N, &Q);
	A=calloc(N, sizeof(int)); 
	for(int i=0; i<N; ++i) scanf("%d", A+i);
	for(int i=0; i<Q; ++i){
		int L,R,sum=0;
		scanf("%d %d", &L, &R);
		for(int j=L-1; j<R; ++j) sum += A[j];
		printf("%d\n", sum);
	}

	return 0;
}
