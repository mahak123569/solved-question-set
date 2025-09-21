
#include <stdio.h>
struct student{
    char name[100];
    int age;
    float totalmarks;
    };

int main() {
    struct student s1;
    printf("Information of first student\n");
     scanf("%s",s1.name);
     scanf("%d",&s1.age);
     scanf("%f",&s1.totalmarks);
    printf("student name = %s\n",s1.name);
    printf("student age = %d\n",s1.age);
    printf("total marks of student = %.2f\n",s1.totalmarks);
    
    struct student s2;
    printf("Information of second student\n");
    scanf("%s",s2.name);
    scanf("%d",&s2.age);
    scanf("%f",&s2.totalmarks);
    printf("student name = %s\n",s2.name);
    printf("student age = %d\n",s2.age);
    printf("total marks of student = %.2f\n",s2.totalmarks);
    
    float avg = (s1.totalmarks+s2.totalmarks)/2;
    printf("Average of totalmarks = %.2f\n",avg);
   
    return 0;
}