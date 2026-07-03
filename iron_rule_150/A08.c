#include <stdio.h>

/*
A1 A2 A3
B1 B2 B3 -> 
C1 C2 C3

A1 A1+A2 A1+A2+A3
B1 B1+B2 B1+B2+B3 ->
C1 C1+C2 C1+C2+C3

A1       A1+A2 	           A1+A2+A3
A1+B1    A1+A2+B1+B2       A1+A2+A3+B1+B2+B3
A1+B1+C1 A1+A2+B1+B2+C1+C2 A1+A2+A3+B1+B2+B3+C1+C2+C3

この累積和に対し、たとえば、2行2列から3行3列の和は(ここでは線形代数の行列と同じi行j列方式を採用する)
この累積和を行列Mとおくと
sum = M(3,3) - M(1,3) - M(3,1) + M(1,1)
で求まる
*/

#define MAX_LEN 1500
int table[MAX_LEN+1][MAX_LEN+1]; // zero-initialization

int main(){
	int H,W; scanf("%d %d", &H,&W);
	for(int i=1; i<H+1; ++i)
		for(int j=1; j<W+1; ++j){
			int X; scanf("%d",&X);
			table[i][j] = table[i][j-1] + X;
		}

	for(int i=1; i<H+1; ++i)
		for(int j=1; j<W+1; ++j){
			table[i][j] += table[i-1][j];
		}

	int Q; scanf("%d", &Q);
	for(int i=0; i<Q; ++i){
		int A,B,C,D;
		scanf("%d %d %d %d", &A,&B,&C,&D);
		const int sum = table[C][D] - table[C][B-1] - table[A-1][D] + table[A-1][B-1];
		printf("%d\n", sum);
	}

	return 0;
}
