#include <stdio.h>

int main(){
	int N; scanf("%d",&N);
	for(int i=0,reg=0;i<N;++i){
		getchar();
		char T; int A; scanf("%c %d",&T,&A);	
		if(T=='+') reg+=A;
		else if(T=='-') reg-=A;
		else if(T=='*') reg*=A;
		printf("%d\n",reg%10000);
	}

	return 0;
}
