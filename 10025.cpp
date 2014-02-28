#include <stdio.h>
#include <string.h>
char *str_cat(char *s,char *t);
int main()
{
	char s[80],t[80];

	gets(s);
	gets(t);
	puts(str_cat(s,t));
	return 0;
}

char *str_cat(char *s,char *t) {
    char* p = s + strlen(s);
    while (*p++ = *t++);
    return s;
}
