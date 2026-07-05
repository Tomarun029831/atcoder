#include <stdio.h>

/*
nが1と自分自身以外の数で割り切れると仮定する. ...[1]
	n=a * b (1 < a <= b < n)
と表すことができる.
ここで、aもbも両方ともa>root(n) かつ b>root(n)であるとする. ...[2]
	a * b > n
しかし[1]と矛盾する。
したがって、整数a, bのうち、少なくとも一方は必ずroot(n)以下である。
	1 < a <= root(n) -> 1 < a^2 <= n

*/

int check_prime(int X){
	if(X<2) return 0;
	else if(X<4) return 1; // X=2,3
	else if((X&1)==0) return 0; // X is even

	for(int div=3;div*div<=X;div+=2)
		if(X%div == 0)
			return 0;
	return 1;
}

int main(){
	int Q; scanf("%d",&Q);
	for(int i=1;i<Q+1;++i){
		int X; scanf("%d",&X);
		puts(check_prime(X) ? "Yes" : "No");
	}

	return 0;
}
