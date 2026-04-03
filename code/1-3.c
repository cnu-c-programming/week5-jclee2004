#include <stdio.h>

void print_reverse(int * arr, int size) {
    for(int i=size-1;i>=0;i--) {
        printf("%d",*(arr+i));
        if(i!=0) {
            printf(" ");
        }
    }
}

int main() {
    int nums[] = {1,2,3,4,5};

    print_reverse(nums,5);
    printf("\n");
    return 0;
}