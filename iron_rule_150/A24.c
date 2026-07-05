#include <stdio.h>

int A[100001];
int dfs(int i, int N){
	int max=0;
	for(int j=i+1;j<N+1;++j){
		if(A[i]>=A[j]) continue;
		const int temp = dfs(j, N);
		if(temp>max) max = temp;
	}
	return max+1;
}

int main(){
	int N,max=0; scanf("%d",&N);
	for(int i=1; i<N+1; ++i) scanf("%d",A+i);

	for(int i=1;i<N+1;++i){
		const int temp = dfs(i, N);
		if(temp>max) max = temp;
	}
	printf("%d\n",max);
	return 0;
}
