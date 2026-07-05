#include <stdio.h>

int H,W;
unsigned long long dp[31][31]; // dp[i][j]: マス(1, 1)からマス(i, j)まで移動制限を守りながら、到達できる通り方の数の最大値
		      // dp[i][j] = (c[i][j] == BLACK) : 0 ? (dp[i-1][j]+dp[i][j-1])
#define INVALID '\0'
#define WHITE '.'
#define BLACK '#'
char c[31][31];
void DEBUG_DISPLAY_C(){for(int h=1;h<H+1;++h){ putchar('\n'); for(int w=1;w<W+1;++w) putchar(c[h][w]); }}
void DEBUG_DISPLAY_DP(){for(int h=1;h<H+1;++h){ putchar('\n'); for(int w=1;w<W+1;++w) printf("%18lld ", dp[h][w]); }}

/*
0 0 0 0
0 1 1 1
0 1 2 3
0 1 3 6
*/


int main(){
	scanf("%d %d", &H, &W);
	for(int h=1;h<H+1;++h){ getchar(); for(int w=1;w<W+1;++w) c[h][w]=getchar(); }
	dp[1][1]=1; // 例外的な設定
	for(int h=1;h<H+1;++h)
		for(int w=1;w<W+1;++w){
			if(c[h][w]==BLACK || ((h==1)&&(w==1))) continue;
			dp[h][w] = (dp[h-1][w]+dp[h][w-1]);
		}
	printf("%lld\n", dp[H][W]);
	return 0;
}
