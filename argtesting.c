#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("%i \n", argc);
	int i;
	for(i=1; i<argc; i++)
		printf("%s \n", argv[i]);

	return 0;
}