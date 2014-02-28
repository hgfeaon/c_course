#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int search(int n);
int main(void)
{
        int number,ri,repeat;

        scanf("%d",&repeat);
        for(ri=1;ri<=repeat;ri++){
                do{
                        scanf("%d",&number);
                }while(number<101||number>999);
                printf("count=%d\n",search(number));
        }
        system("pause");
        return 0;
}

int search(int n) {
    int i,j;
    int cur = 11 * 11;
    int d, digit[10];
    int tmp, total=0;
    
    for (j=0; j<10; j++) digit[j]=0;
    for (i=11; cur<=n; i++, cur = i*i) {
        tmp = cur;
        while (tmp != 0) {
              d = tmp % 10;
              digit[d]++;
              if (digit[d] > 1) break;
              tmp /=10; 
        }
        if (tmp != 0)total++;
        for (j=0; j<10; j++) digit[j]=0;
    }
    return total;
}
