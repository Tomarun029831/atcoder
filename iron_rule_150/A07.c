#include <stdio.h>
#include <stdlib.h>

int main(){
	int D,N,L,R,*att;
	scanf("%d %d", &D,&N);
	att = calloc(D, sizeof(int));
	for(int i=0; i<N; ++i){
		scanf("%d %d", &L,&R);
		for(int j=L-1; j<R; ++j) ++att[j];
	}
	for(int i = 0; i<D; ++i) printf("%d\n", att[i]);

	return 0;
}
