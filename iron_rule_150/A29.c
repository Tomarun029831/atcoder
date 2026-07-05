#include <stdio.h>

// ( ... (((a mod M) * a mod M) mod M) * a mod M) ... ) mod M = a^b mod M
int main(){
	long long a; long long b; scanf("%lld %lld", &a, &b);
	a %= 1000000007;
	long long mod=a;
	for(;b>1;--b,mod=(mod*a)%1000000007);
	printf("%lld\n",mod);
}
