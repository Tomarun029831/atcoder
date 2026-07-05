#include <stdio.h>

int X[10001];
int main(){
	int Q; scanf("%d",&Q);
	for(int i=1;i<Q+1;++i){
		int X; scanf("%d",&X);
		int div=X-1;
		for(;(div>0)&&(X%div!=0);--div);
		puts((div==1) ? "Yes" : "No");
	}

	return 0;
}
