#include <stdio.h>
#include <stdlib.h>

typedef char * string;

int main(void) {
	int m;
	int *a;
	int *b = malloc(sizeof(int));
	a = &m;
	a = b;
	m = 10;
	*b = m + 2;
	free(b);
	*b = 11;
	return 0;
}
