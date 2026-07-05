#include <stdio.h>

int gcd(int a, int b){
	while(a>=1&&b>=1)
		if(a>b) a=a%b;
		else b=b%a;
	return (a==0) ? b : a;
}

int main(){
	int A,B; scanf("%d %d",&A,&B);
	printf("%d\n", gcd(A,B));
	return 0;
}
