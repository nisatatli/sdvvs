#include<stdio.h>

int main()
{
	char t[] = { 99, 113, 100, 96, 108, 0, 97, 104, 102, 0 };
	char* c = t;
	for (; *c; ++c) {
		*c = *c + 1;
	}
	printf("%s", t);
	return 0;
}
