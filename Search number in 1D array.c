#include <stdio.h>
#include <stdlib.h>

#define arrlength 10
void searchnumber(){
     int arra[arrlength];
  for (int i = 0; i < arrlength; i++) {
        printf("Enter index %d in Array: ", i);
        scanf("%i", &arra[i]);
    }


    int min = arra[0], max = arra[0];


int searchNumber;
    printf("Enter a number to search: ");
    scanf("%d", &searchNumber);

    int found = 0;
    for (int i = 0; i < arrlength; i++) {
        if (arra[i] == searchNumber) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Number %d found in the array.\n", searchNumber);
    } else {
        printf("Number %d didn't find  in the array.\n", searchNumber);
    }

}
int main()
{
   searchnumber();
    return 0;
}
