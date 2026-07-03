#include <stdio.h>

int main(){
	int N; scanf("%d",&N);
	int A[100000];
	for(int i=0; i<N; ++i) scanf("%d",A+i);
	int D; scanf("%d",&D);
	for(int i=0; i<D; ++i){
		int L,R,MAX=A[0]; scanf("%d %d",&L,&R);
		for(int j=1; j<N; ++j){
			if(L-1<=j && j<=R-1) continue;
			if(MAX<A[j]) MAX=A[j];
		}
		printf("%d\n",MAX);
	}

	return 0;
}
