#include <stdio.h>

/*
https://ja.wikipedia.org/wiki/%E3%83%8B%E3%83%A0
```
コインの山の数を n とし、各山のコインの枚数を A1, …, An とする。
S = A1 ⊕ ⋯ ⊕ An とおく。
S ≠ 0 ならば先手必勝、S = 0 ならば後手必勝にできる。
```
*/

int main(){
	int N; scanf("%d",&N);
	int xor=0;
	for(int i=1; i<N+1; ++i){
		int input; scanf("%d",&input);
		xor ^= input;
	}
	puts(xor ? "First" : "Second");
	return 0;
}
