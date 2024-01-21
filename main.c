#include<stdio.h>
#include<stdlib.h>
int main()
{
    int _size;
    printf("please enter number index: \n");
    scanf("%i",&_size);
    int *ptr = malloc(_size * sizeof(int));

//    for(int i=0;i<_size;i++)
//    {
//        printf("Enter number in index %i\n",i);
//        scanf("%i",(ptr+i));
//    }
//    for(int i=0;i<_size;i++)
//    {
//        printf("index %i: %i\n",i,*(ptr+i));
//    }

    for(int i=0;i<_size;i++)
    {
        printf("Enter number in index %i\n",i);
        scanf("%i",&ptr[i]);
    }
    for(int i=0;i<_size;i++)
    {
        printf("index %i: %i\n",i,ptr[i]);
    }




    return 0;
}
