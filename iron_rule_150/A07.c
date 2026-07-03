#include <stdio.h>
#include <stdlib.h>

int main(){
	int D,N; scanf("%d %d", &D, &N);
	int *diff = calloc(D+1, sizeof(int));
	if(diff==NULL) return 1;
	for(int i=0; i<N; ++i){
		int L,R; scanf("%d %d", &L,&R);
		++diff[L-1]; --diff[R];
	}
	for(int i=0, sum=diff[i];i<D; sum+=diff[++i]) printf("%d\n", sum);

	free(diff);
	return 0;
}
