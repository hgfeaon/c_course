

#include <stdio.h>
double fun(int n, double x);
int main(void)
{
	int n;
	double x, root; 

    	scanf("%lf%d", &x,&n);
  	root = fun(n, x);
 	printf("Root = %0.2f\n", root);
}  

double fun(int n, double x) {
    if (n == 1) return x;
    if (n == 0) return 1;
    double r = fun(n/2, x);
    if (n & 0x1) {
        return r*r*x;
    } else {
        return r*r;
    }
}
