/*       test2.c       */

volatile int my_global[8] = {1, 2, 3, 4, 5, 6, 7, 8};

int main (int argc, char *argv[])
{
	int a;
	int b;

	a = argv[1][0] + 13;
	b = argv[2][0] + 17;
	if (a > b)
	b = b + 19;

	while (a--)
	b = my_global[a & 0x7] + 21;

	return (b - 23);
}
