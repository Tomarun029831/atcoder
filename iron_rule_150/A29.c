#include <stdio.h>

/*
(x * (y mod M)) mod M = (x * y) mod M を認めて

a: 10進, b: 2進
b=(1101)_2とする。
a^b = a^(1101)
ここでb=1*2^3 + 1*2^2 + 0*2^1 + 1*2^0と表せるので
a^(1101) = a^(1*2^3 + 1*2^2 + 0*2^1 + 1*2^0)
= a^(1*2^3) * a^(1*2^2) * a^(0*2^1) * a^(1*2^0)
= a^(2^3) * a^(2^2) * 1 * a^(2^0)
= a^8 * a^4 * 1 * a^1
これらは
(a^1)^2=a^2
(a^2)^2=a^4
(a^4)^2=a^8
...と求めることができる
*/

int main(){
	#define M 1000000007
	long long a,b; scanf("%lld %lld", &a, &b);
	a %= M;
	long long mod=1;
	for(;b>0;b>>=1,a=(a*a)%M)
		mod = (mod * ((b&1) ? a : 1)) % M;

	printf("%lld\n",mod);
	return 0;
}
