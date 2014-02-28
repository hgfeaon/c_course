#include <stdio.h>
char newstr[80];
int main()
{
	char str[80],c_begin,c_end;
	char *fun(char *p,char c_begin,char c_end);

	scanf("%s",str);
	getchar();
	c_begin=getchar();
	getchar();
	c_end=getchar();
	puts(fun(str,c_begin,c_end));
	
	return 0;
}

char *fun(char *p, char c_begin, char c_end) {
    char* np = newstr;
    while (*p != '\0' && *p != c_begin) p++;
    while (*p != '\0' && *p != c_end) *np++ = *p++;
    if (c_end != '\0' && *p != '\0') *np++ = c_end;
    *np = '\0';
    return newstr;
}
