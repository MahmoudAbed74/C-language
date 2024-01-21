#include <stdio.h>

int main() {
    int numberone;
    int numbertwo;
    char choice;
    char opertor;
do {


    printf("Please enter number one: \n");
    scanf("%d", &numberone);

    printf("Please enter number two: \n");
    scanf("%d", &numbertwo);

    printf("Please enter Operator: \n");
    _flushall();
    scanf(" %c", &opertor);

    if (opertor == '/') {
        int result = numberone / numbertwo;
        printf("%d / %d = %d\n", numberone, numbertwo, result);
    } else if (opertor == '+') {
        int result = numberone + numbertwo;
        printf("%d + %d = %d\n", numberone, numbertwo, result);
    } else if (opertor == '-') {
        int result = numberone - numbertwo;
        printf("%d - %d = %d\n", numberone, numbertwo, result);
    } else if (opertor == '*') {
        int result = numberone * numbertwo;
        printf("%d * %d = %d\n", numberone, numbertwo, result);
    } else {
        printf("Invalid operator entered.\n");
    }
    printf("Do you want to perform another calculation? (y/n): ");

        scanf(" %c", &choice);
}while(choice == 'y' || choice == 'Y');

  printf("Program terminated.\n");
    return 0;
}
