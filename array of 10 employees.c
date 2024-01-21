#include <stdio.h>
#include <stdlib.h>
struct empyolee{
int ssn ;
char name[10] ;
int age;
float salary,commission,deduction;

};

void PrintEmpyolees(struct empyolee param){

printf("this is ssn: %d\n",param.ssn);
printf("this is name: %s\n",param.name);
printf("this is age: %d\n",param.age);
float netSalary = param.salary + param.commission - param.deduction;
printf("this is netsalary  %.2f\n",netSalary);
}
int main() {
    int num =0;
     char ch;
    struct empyolee employees[num];

    do{
    int i = 0;

    do{
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Enter SSN: ");
        scanf("%d", &employees[i].ssn);

        printf("Enter Name: ");
        scanf("%s", employees[i].name);

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter Commission: ");
        scanf("%f", &employees[i].commission);

        printf("Enter Deduction: ");
        scanf("%f", &employees[i].deduction);
        i++;
    }while(i < num);
    printf("\nDetails of all employees:\n");

      num++;

    printf("if you contuine press Y \n");
     ch = getche();


    }
 while(ch =='y');
 int i = 0;
    do {
        PrintEmpyolees(employees[i]);
i++;
    }while( i < num);
    return 0;
}
