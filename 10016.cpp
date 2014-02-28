#include "stdio.h"
#include <stdlib.h>

int main(void)
{
  int ri,repeat;
  int i,n;
  void dectobin(int n);

  scanf("%d",&repeat);
  for(ri=1;ri<=repeat;ri++){
    scanf("%d",&n);
    dectobin(n);
    printf("\n");
  }
}

void dectobin(int n) {
    int cur = n & 0x1;
    n = n>>1;
    if (n > 0) {
        dectobin(n);
    }
    printf("%d", cur);
}
