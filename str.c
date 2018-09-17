#include <stdio.h>
#include <string.h>

char maxstr[10]="test";

char compare(char *str1, char *str2)
{
	while(*str1)
	{
		if(*str1 != *str2)
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if(*str2 == '\0')
	{
		return 1;
	}
	return 0;
}

void makeErrorStr(char *str1)
{
	strcpy(str1, "this is formatled error");
	strcpy(maxstr, "this is formatled error");
}
