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
    struct empyolee employees[3];
    for (int i = 0; i < 3; i++) {
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
    }

    printf("\nDetails of all employees:\n");
    for (int i = 0; i < 3; i++) {
        PrintEmpyolees(employees[i]);
    }

    return 0;
}
