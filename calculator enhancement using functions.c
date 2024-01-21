#include <stdio.h>
#include <stdlib.h>

float Add(float number1 , float number2){

return number1 + number2 ;

}
float subst(float number1, float number2) {
    return number1 - number2;
}
float Div(float number1,float number2){
    return number1 / number2 ;

}
float muld(float number1,float number2){
    return number1 * number2 ;

}
int main()
{
 float _number1 , _number2 ;
 printf("enter number1: ");
 scanf("%f",&_number1);
 printf("enter number2: ");
 scanf("%f",&_number2);

 printf("Addition: %.1f\n", Add(_number1, _number2));
    printf("Subtraction: %.1f\n", subst(_number1, _number2));
    printf("Division: %.2f\n", Div(_number1, _number2));
    printf("Multiplication: %.1f\n", muld(_number1, _number2));
    return 0;
}
///float Add(float x,float y){}
//float Sub(float x,float y){}
//float Mul(float x,float y){}
//float Div(float x,float y){}
