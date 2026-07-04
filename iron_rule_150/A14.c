#include <stdio.h>

long long table[4][1000];
int main(){
	int N; long long K; scanf("%d %lld",&N,&K);
	for(int i=0;i<4;++i)
		for(int j=0;j<N;++j)
			scanf("%lld",*(table+i)+j);
	for(int i=0;i<N;++i) //A
		for(int j=0;j<N;++j) //B
			for(int k=0;k<N;++k) //C
				for(int l=0;l<N;++l) //D
					if(table[0][i]+table[1][j]+table[2][k]+table[3][l] == K){ puts("Yes");return 0; }
	puts("No");

	return 0;
}
