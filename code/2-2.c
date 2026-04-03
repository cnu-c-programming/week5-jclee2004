#include <stdio.h>
#include <string.h>

void sort_string(char ** arr,int size) {
    char * temp;

    for(int i=0; i<size-1; i++) {
        for(int j=i;j<size-1;j++) {
            if(strcmp(arr[i],arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char * words[] = {"apple","ant","banana","cherry"};
    int size = 4;

    sort_string(words,size);

    for(int i=0;i<size;i++) {
        printf("%s\n",words[i]);
    }
}