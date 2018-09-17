#include <stdio.h>
#include <string.h>

char compare(char *str1, char *str2);

int main() {
	char str1[20]="hello";
	char str2[20]="hi";
	char x;
	int *ptr;
	short shint;
	char formatled[10], *ptr1, *ptr2;

	*ptr = 50;
	x = 511;
	shint = 33000;
	shint = -34000;

	ptr1 = formatled;
	ptr2 = formatled;

	strcpy(ptr1, "this is formatled error");
	makeErrorStr(ptr2);
	makeErrorFun(ptr2);
	printf("%s \n", ptr1);

	if(compare(str1,str2)) {
		printf("%s and %s are same sentense.\n", str1, str2);
	}
	else {
		printf("%s and %s are different sentense.\n", str1, str2);
	}
	str2[50] = 'a';
	return 0;
}

makeErrorFun(char *str1) {
	char maxStr[10]="test";
	strcpy(str1, "this is formatled error");
	strcpy(maxStr, "this is formatled error");
}
