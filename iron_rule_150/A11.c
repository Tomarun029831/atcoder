#include <stdio.h>

int A[100000];
int main(){
	int N,X; scanf("%d %d",&N,&X);
	for(int i=0;i<N;++i) scanf("%d",A+i);
	for(int left=0,right=N-1,mid=(left+right)/2;left<=right;mid=(left+right)/2){
		if(A[mid] == X) {printf("%d\n",mid+1); return 0;}
		else if(A[mid] < X) left=mid+1;
		else right=mid-1;
	}
	printf("-1\n");
	return 0;
}
