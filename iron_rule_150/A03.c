#include <stdio.h>

#define N_MAX 100
int main(){
	int N, K, P[N_MAX], Q[N_MAX];
	scanf("%d %d", &N, &K);
	for(int i=0; i<N; ++i) scanf("%d", P+i);
	for(int i=0; i<N; ++i) scanf("%d", Q+i);
	for(int i=0; i<N; ++i){
		const int diff = K-P[i];
		for(int j=0; j<N; ++j)
			if(diff == Q[j]){puts("Yes"); return 0;}
	}
	puts("No");
	return 0;
}
