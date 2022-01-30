/*             test1.c         */
#define DIFFERENCE     1
#include "test1.h"

int main (int argc, char *argv[])
{
	if (FIND_DIFF(argv[1][0], argv[2][0]) == DIFFERENCE)
		return 0;
	return 1;
}
