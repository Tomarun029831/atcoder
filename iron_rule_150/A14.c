#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long arg1 = *(const long long *)a;
    long long arg2 = *(const long long *)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

long long table[4][1000];
long long sum[2][1000*1000];
int main(){
	int N; long long K; scanf("%d %lld",&N,&K);
	for(int i=0;i<4;++i)
		for(int j=0;j<N;++j)
			scanf("%lld",*(table+i)+j);
	for(int i=0;i<N;++i)
		for(int j=0;j<N;++j){
			sum[0][i*N+j]=table[0][i]+table[1][j];
			sum[1][i*N+j]=table[2][i]+table[3][j];
		}
	qsort(sum+1,N*N,sizeof(long long),compare);
	for(int i=0;i<N*N;++i){
		const long long diff = K-sum[0][i];
		for(long long l=0,r=N*N-1,mid=(r+l)/2;l<=r;mid=(r+l)/2){
			if(sum[1][mid]==diff) {puts("Yes"); return 0;}
			else if(sum[1][mid]>diff) r=mid-1;
			else l=mid+1;
		}
	}

	puts("No");
	return 0;
}
