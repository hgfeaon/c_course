#include <stdio.h>
#include <stdlib.h>

long fib(int n);
int main(void)
{
	int n,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&n);
		printf("fib(%d)=%ld\n",n,fib(n));
	}
}

long fib(int n) {
    if (n <= 1) return n;
    return fib(n-2)+fib(n-1);
}
