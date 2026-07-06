#include <stdio.h>

/* まったく意味が分からない */

int main(){
	int N, X, Y; scanf("%d %d %d",&N,&X,&Y);
	int A[100001]; for (int i = 1; i < N+1; i++) scanf("%d", A+i);

	// Grundy数を求める
	int grundy[100001];
	for (int i = 0; i < 100001; i++)
	{
		int Transit[3] = {0, 0, 0};
		if (i >= X) Transit[grundy[i-X]] = 1;
		if (i >= Y) Transit[grundy[i-Y]] = 1;
		if (Transit[0] == 0) grundy[i] = 0;
		else if (Transit[1] == 0) grundy[i] = 1;
		else grundy[i] = 2;
	}

	int xor = 0;
	for (int i = 1; i <= N; i++) xor = xor ^ grundy[A[i]];
	puts(xor ? "Second" : "First");
	return 0;
}
