#include <stdio.h>
#include <stdlib.h>

int fun_rec(int num1){
    if (num1 == 1){
    return 1 ;
    }
    else{
    return num1 * fun_rec(num1-1);
    }

}
int Power(int _base,int _p)
{
    if(_p==0)
    {
        return 1;
    }
    else
    {
        return _base * Power(_base,_p-1);
    }
}

int main()
{
    int number,powernum,base ;

    printf("enter number: ");
    scanf("%d",&number);
   int result = fun_rec(number);
   printf("result: %d\n",result);
   printf("enter number: and power: ");
    scanf("%d",&base);
    scanf("%d",&powernum);
   int result2 = Power(base,powernum);
   printf("result: %d",result2);
    return 0;
}
