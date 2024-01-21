#include <stdio.h>

int main()
{
    char name[50];

    int i=0;
    printf("enter your name\n");
        gets(name);
        printf("this is a name in array: \n");
        puts(name);
        int length = lengthoftext(name);
        printf("This is the name reversed in array: \n");
        for(int i=length;i>=0;i--){
        printf("%c",name[i-1]);
        }
}


int lengthoftext( char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}
