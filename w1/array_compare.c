#include <stdio.h>

#define SIZE 5

int compare(int array1[], int array2[], int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        if(array1[i] != array2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int array1[SIZE];
    int array2[SIZE];
    int i;

    printf("Enter array 1 (only integers): \n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array1[i]);
    }
    printf("Enter array 2 (only integers): \n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array2[i]);
    }

    if (compare(array1, array2, SIZE) == 1) {
        printf("Equal!");
    } else {
        printf("Not equal!");
    }
    return 0;
}