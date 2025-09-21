#include <stdio.h>
int main() {
int id;
int hrs,salary;
float salary_amount;
printf("Input the employeeID (max.10 char): ");

scanf("%d",&id);

printf("\nInput the working hrs: ");
scanf("%d",&hrs);
printf("Inter a salary: ");
scanf("%d",&salary);
printf("employee's ID = %d\n",id);
salary_amount=salary * hrs;
printf("salary = %.2f\n",salary_amount);
    return 0;
}