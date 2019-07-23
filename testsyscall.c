#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int v1 = 2;
	int v2 = 3;
	int x = syscall(548, v1, v2);
	printf("my_syscall was given %d and %d, and returned %d\n", v1, v2, x);

	char* str1 = (char*)malloc(20*sizeof(char));	
	strcpy(str1, "noice, smort");

	char* str2 = (char*)malloc(500*sizeof(char));
	strcpy(str2, "AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");

	printf("my_syscall2 was given:\n%s\n", str1);
	int y = syscall(549, str1);
	printf("my_syscall2 returned: %d\n", y);
	printf("str 1 changed to: %s\n", str1);

	printf("my_syscall2 was given: \n %s \n", str2);
	int z = syscall(549, str2);
	printf("my_syscall2 returned: %d\n", z);

	free(str1);
	free(str2);

	return 0;
}
