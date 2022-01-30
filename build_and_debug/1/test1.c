/*             test1.c         */
#define DIFFERENCE     1
#define FIND_DIFF(a,b) ((a) - (b))

int main (int argc, char *argv[])
{
	if (FIND_DIFF(argv[1][0], argv[2][0]) == DIFFERENCE)
		return 0;
	return 1;
}
