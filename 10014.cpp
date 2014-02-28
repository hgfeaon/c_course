#include <stdio.h>
#include <stdlib.h>
double p(int n, double x);
int main(void)
{
   int repeat, ri;
   int n;
   double x, result;

   scanf("%d", &repeat);
   for(ri = 1; ri <= repeat; ri++)
   {
       scanf("%d%lf", &n, &x);
       result = p(n, x);
       printf("p(%d, %.2lf)=%.2lf\n", n, x, result);
   }
   system("pause");
   return 0;
}

double p(int n, double x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        return ((2*n-1)*p(n-1,x)-(n-1)*p(n-2,x))/n;
    }
}
