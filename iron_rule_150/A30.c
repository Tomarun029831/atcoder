#include <stdio.h>

/*
https://en.wikipedia.org/wiki/Fermat%27s_little_theorem
Mが素数であるとき
	(a^M mod M) = (a mod M) => (a^(M-1) mod M) = (1 mod M)
が成り立つ。
よって
	(1/a mod M) = (a^(M-2) mod M)

nCr	= n!/(r! * (n-r)!)
	= (n * (n-1) * ... * (n-r+1)) / r!

*/

int main(){
#define M 1000000007
	long long n, r; scanf("%lld %lld",&n,&r);
	const long long t = n-r;
	n%=M; for(long long a=n-1;a>t;n=(n*a)%M,--a); // n * (n-1) * ... * (n-r+1)
	r%=M; for(long long a=r-1;a>1;r=(r*a)%M,--a); // r!

	// (x * (y mod M)) mod M = (x * y) mod M
	// => (n/r) mod M = (n * (1/r mod M)) mod M
	// 		  = (n * (r^(M-2)) mod M) mod M
	
	long long new_r=1;
	for(long long bit = M-2; bit>0; bit>>=1,r=(r*r)%M)
		new_r = (new_r * ((bit&1) ? r : 1)) % M;

	printf("%lld\n", n*new_r % M);

	return 0;
}
