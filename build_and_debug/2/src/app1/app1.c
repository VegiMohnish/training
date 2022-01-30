#include <stdio.h>

int app1(int a, int b) {
	return add(shift_left(a,2),b);
}

int main() {
	int a=5,b=3;
	printf("%d\n",app1(a,b));
	return 0;
}

