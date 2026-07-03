#include <stdio.h>

#define MAX_LEN 1500
int table[MAX_LEN+1][MAX_LEN+1];
int main(){
	int H,W,N; scanf("%d %d %d", &H, &W, &N);
	for(int i=0; i<N; ++i){
		int A,B,C,D; scanf("%d %d %d %d", &A, &B, &C, &D);
		++table[A-1][B-1]; --table[A-1][D];
		--table[C][B-1];   ++table[C][D]; // The imos method
	}
	for(int i=0; i<H; ++i)
		for(int j=1; j<W; ++j)
			table[i][j] += table[i][j-1];
	for(int i=1; i<H; ++i)
		for(int j=0; j<W; ++j)
			table[i][j] += table[i-1][j];

	for(int i=0; i<H; ++i){
		for(int j=0; j<W; ++j) printf("%d ", table[i][j]); puts("");
	}

	return 0;
}
