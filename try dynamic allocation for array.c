#include <stdio.h>
#include <stdlib.h>

int main() {
    int size ;
    scanf("%d",&size);

//    int *ptrArr = (int *)malloc(size * sizeof(int));
    int *ptrArr = malloc(size * sizeof(int));



    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
//       scanf("%d", &ptrArr[i]);
        scanf("%d", (ptrArr+i));
    }


    printf("Values in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("value %i: %d\n", i ,ptrArr[i]);
        printf("value %i: %d\n", i ,*(ptrArr+i));
    }


    free(ptrArr);

    return 0;
}
