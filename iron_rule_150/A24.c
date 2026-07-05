#include <stdio.h>

/*
2 3 1 6 4 5に対して
2
2, 3
1, 3, 6
1, 3, 4
1, 3, 4, 5

dp[i]: 長さiとなるLISの末尾の最小値
dp[0]=0
dp[i] = min({A[j] | i<=j, dp[i-1]<A[j]})
*/

int A[100001], dp[100001];
int main(){
	int N; scanf("%d",&N);
	for(int i=1; i<N+1; ++i) scanf("%d",A+i);

	int len=0;
	for(int i=1;i<N+1;++i){
		int l=0,r=len;
		for(int mid=(l+r)/2;l<r;mid=(l+r)/2) // A[i]以上の値が初めて現れる境界を見つける
			if(dp[mid]<A[i]) l=mid+1; else r=mid;
		dp[l]=A[i];
		if(l==len) ++len;
	}

	printf("%d\n",len);
	return 0;
}
