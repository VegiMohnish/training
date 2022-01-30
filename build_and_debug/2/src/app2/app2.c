#include <stdio.h>

int app2(int a, int b) {
        return add(shift_right(a,2),b);
}

int main() {
        int a=5,b=3;
        printf("%d\n",app2(a,b));
        return 0;
}

