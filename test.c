#include <stdlib.h>
#include <string.h>

int main()
{
	char *a;

	a = strdup("aaaaaaa");
	free(a);
	return 0;
}