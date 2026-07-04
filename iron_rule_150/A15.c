#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long val1 = *(const long long *)a;
    long long val2 = *(const long long *)b;
    if (val1 < val2) return -1;
    if (val1 > val2) return 1;
    return 0;
}

long long A[100000], B[100000], C[100000], D[100000];
int main(){
	int N; scanf("%d",&N);
	for(int i=0;i<N;++i) scanf("%lld",A+i);
	for(int i=0;i<N;++i) C[i]=A[i];
	qsort(C,N,sizeof(long long),compare);
	D[0]=1;
	for(int i=1,prv=C[0],cnt=1; i<N; ++i,prv=C[i-1])
		if(C[i]==prv) D[i]=cnt;
		else {++cnt; D[i]=cnt;}
	for(int i=0;i<N;++i)
		for(int j=0;j<N;++j)
			if(A[i]==C[j]) {printf("%lld ", D[j]); break;}
	puts("");

	return 0;
}
