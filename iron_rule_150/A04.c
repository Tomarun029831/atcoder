#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	char display[11];
	display[10] = '\0';
	for(int i=0; i<10; ++i){
		const char c = ((N >> i) & 1) ? '1' : '0';
		display[10-i-1] = c;
	}
	printf("%s\n", display);

	return 0;
}
