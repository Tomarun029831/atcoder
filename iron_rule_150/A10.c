#include <stdio.h>

int A[100001], ToRIGHT[100001], ToLEFT[100002];
int main(){
	int N; scanf("%d",&N);
	for(int i=1;i<N+1;++i) scanf("%d", A+i);
	for(int i=1;i<N+1;++i) ToRIGHT[i] = (ToRIGHT[i-1] > A[i]) ? ToRIGHT[i-1] : A[i];
	for(int i=N;i>0;--i) ToLEFT[i] = (ToLEFT[i+1] > A[i]) ? ToLEFT[i+1] : A[i];

	int D; scanf("%d",&D);
	for(int i=0;i<D;++i){
		int L,R; scanf("%d %d",&L,&R);
		const int max = (ToRIGHT[L-1] > ToLEFT[R+1]) ? ToRIGHT[L-1] : ToLEFT[R+1];
		printf("%d\n",max);
	}

	return 0;
}
