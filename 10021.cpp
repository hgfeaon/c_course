#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;
   
    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));  
        strcpy(color[n], str);
	    n++;
        scanf("%s", str);
    }
    
    /* insertion sort */
    int k;
    for (i=1; i<n; i++) {
        char* cur = color[i];
        for (k=i-1; k>=0 && strcmp(color[k], cur)>0; k--) {
            color[k+1] = color[k];
        }
        color[k+1] = cur;
    }
    
    for(i = 0; i < n; i++) 
        printf("%s  ", color[i]);
    printf("\n");
    return 0;
}
