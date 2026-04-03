#include <stdio.h>

long my_strtol(char * str,char ** endptr) {
    long res = 0;

    int i = 0;
    while(str[i] >= 48 && str[i] <= 57) {
        res = (res*10)+(str[i++]-48);
    }
    
    *endptr = &str[i];
    return res;
}

int main() {
    char str[] = "2026hello";
    char * end;

    long val = my_strtol(str,&end);

    printf("%ld %s\n",val,end);
}