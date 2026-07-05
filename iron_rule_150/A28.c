#include <stdio.h>

int main(){
	int N; scanf("%d",&N);
	for(int i=0,reg=0;i<N;++i){
		getchar();
		char T; int A; scanf("%c %d",&T,&A);	
		if(T=='+') reg+=A;
		else if(T=='-') reg-=A; // 最悪でも0 ~ -100
		else if(T=='*') reg*=A;

		if (reg < 0) reg += 10000; // 10000 ~ 9900
		reg %= 10000; // (a mod M + b) mod M = a mod M + b mod M = (a+b) mod M
		printf("%d\n",reg);
	}

	return 0;
}
