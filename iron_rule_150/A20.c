#include <stdio.h>

char S[2002], T[2002];
int dp[2001][2001]; // dp[i][j], S[i]までとT[j]までの共通部分文字列の長さの最大値
int main(){
	scanf("%s %s",S+1,T+1);
	int slen=0,tlen=0;
	for(char *s=S+1; *s!='\0'; ++s,++slen);
	for(char *t=T+1; *t!='\0'; ++t,++tlen);

	for(int i=1;i<slen+1;++i)
		for(int j=1;j<tlen+1;++j)
			dp[i][j]=(S[i]==T[j]) ? dp[i-1][j-1] + 1 :	// 新たに加えるS[i]とT[i]が一致するならそれを一文字分を加える
				 (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];	// 一致しないとき新たに加えることはないので、
											// dp[i-1][j]とdp[i][j-1]の大きい方の最大値を引き継ぐ
											// ここでdp[i-1][j-1]を比較に加えないのは
											// dp[i-1][j] >= dp[i-1][j-1], dp[i][j-1] >= dp[i-1][j-1]と
											// 片方の文字を加えた方がそうでない方より小さくなることは
											// 貪欲法を使う以上ありえないからである。
	printf("%d", dp[slen][tlen]);
	return 0;
}
