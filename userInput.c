#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	printf("Type two integers seperated with space\n");
	scanf("%d %d", a, b);
	printf("The numbers are %d, %d \n", a,b);
	if (a>b)
	{
		printf("a is greater\n");
	} else if (a == b) {
		printf("neither is greater\n");
	} else {
		printf("b is greater\n");
	}
}