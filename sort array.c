#include <stdio.h>
#include <stdlib.h>
#define arrlength 3
int main() {
    int arr[arrlength];
    for (int i=0;i < arrlength;i++) {
        printf("Enter index in array %d: ",i );
        scanf("%i",&arr[i]);
    }
    int numberstored;
    for (int i =0;i < arrlength;i++) {
        for (int j = 0; j < arrlength ; j++) {
            if (arr[j]> arr[j + 1]) {
                 numberstored = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = numberstored;
            }
        }
    }
      printf("Original array: \n");
    for (int i = 0; i < arrlength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSorted array:\n");
    for (int i = 0; i < arrlength; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
