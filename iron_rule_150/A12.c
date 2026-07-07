#include <stdio.h>

long long A[100000];
int main(){
	int N;
	long long K; scanf("%d %lld",&N,&K);
	for(int i=0;i<N;++i) scanf("%lld",A+i);
	long long lsec=1,rsec=10000000000;
	for(long long mid=(lsec+rsec)/2;lsec<rsec;mid=(lsec+rsec)/2){
		long long cnt=0;
		for(int i=0;i<N;++i){
			cnt+=mid/A[i];
			if(cnt>K) break;
		}
		if(cnt>=K) rsec=mid;
		else lsec=mid+1;
	}
	printf("%lld\n",lsec);

	return 0;
}
