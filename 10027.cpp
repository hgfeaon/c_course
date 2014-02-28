#include <stdio.h>
#include <string.h>
char p[16];
int main()
{
	char	*change(char s[4][20]);
	char	s[4][20];
	int	i;
	for(i=0;i<4;i++)
		scanf("%s",s[i]);
	puts(change(s));
	return 0;
}
char *change(char s[4][20])
{
	int	i,t,len;
    
    char* d = p;
    for (i=0; i<4; i++, d+=2) {
        strcpy(d, s[i] + strlen(s[i]) - 2);
    } 
	return (p);
}
