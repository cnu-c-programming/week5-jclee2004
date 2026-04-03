#include <stdio.h>

int main() {
    int val=7;
    int other = 77;

    const int * const p = &val;

    printf("%d\n",*p);
    return 0;
}