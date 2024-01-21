#include <stdio.h>
#include <stdlib.h>

int main()
{
int currentday=4;
int currentmonth=12;
int currentyear=2023;
int ageofday,ageofmonth,ageofyear ;

do {
printf("please enter your year from 1980->2023\n");

    printf("The day you were born\n");
    scanf("%d",&ageofday);
printf("The month you were born\n");
    scanf("%d",&ageofmonth);
    printf("The Year you were born\n");
    scanf("%d",&ageofyear);
}while(ageofyear <= 1980 && ageofyear <=2023 );
int ageofdaynow= (currentday - ageofday) ;
int ageofmonthnow=  (currentmonth - ageofmonth);
int ageofyearnow=  currentyear - ageofyear;
 if (ageofdaynow < 0) {
        ageofmonthnow--;
        ageofdaynow += 31;
    }

    if (ageofmonthnow < 0) {
        ageofyearnow--;
        ageofmonthnow += 12;
    }

printf("your old is %d years and %d month and %d days ",ageofyearnow,ageofmonthnow,ageofdaynow);

    return 0;
}

