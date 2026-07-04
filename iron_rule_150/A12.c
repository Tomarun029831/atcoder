#include <stdio.h>

int A[100000];
int main(){
	int N,K; scanf("%d %d",&N,&K);
	for(int i=0;i<N;++i){
		int X; scanf("%d",&X);
		A[i]=X;
	}
	int sec,cnt;
	for(sec=1,cnt=0;cnt<K;){
		++sec;
		for(int j=0;j<N;++j)
			if(sec%A[j] == 0)
				++cnt;
	}
	printf("%d\n",sec);

	return 0;
}
