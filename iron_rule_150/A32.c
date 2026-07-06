#include <stdio.h>

/*

A:2 B:3
8 A
6 B
3 A
1 -> first
取り除いた回数が1多い方が勝者

*/

int main(){
	int N,A,B; scanf("%d %d %d",&N,&A,&B);
	int turn=0,cntA=1,cntB=0;
	while(cntA*A+cntB*B<=N){
		cntA+=(turn==1 ? 1:0);
		cntB+=(turn==0 ? 1:0);
		turn=(turn==0 ? 1:0);
	}
	puts(turn ? "First" : "Second");

	return 0;
}
