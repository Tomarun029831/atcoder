#include <stdio.h>

int A[100001],B[100001];
int main(){
	int N; scanf("%d",&N);
	for(int i=2;i<N+1;++i) scanf("%d",A+i);
	for(int i=3;i<N+1;++i) scanf("%d",B+i);
	int sum=0;
	for(int i=N;i>1;i-=(A[i]<B[i])?1:2){
		sum+= (A[i]<B[i]) ? A[i] : B[i];
	}

	printf("%d\n",sum);
	return 0;
}
