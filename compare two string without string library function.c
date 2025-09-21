#include<stdio.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Input the first string:");
    fgets(str1,100,stdin);
    printf("Input the second string:");
    fgets(str2,100,stdin);
    printf("%s",str1);
    printf("%s\n",str2);
    str2=str1;

    if(str1==str2){
        printf("%s strings are equal %s\n",str1,str2);
    }else{
         printf("strings are not equal\n");
    }
    return 0;
}