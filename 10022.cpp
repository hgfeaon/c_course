#include<stdio.h>
int main()
{
	int ri,repeat;
	int month;
	char *month_name[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	
	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&month);
		if (month>12) {
		    printf("Wrong input!\n");
		} else {
		    printf("%s\n", month_name[month]);
		}
	}
	return 0;
}
