#include<stdio.h>
#include<string.h>
int countwords(char str[]){
    int count=0;
    int state=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t'){
            state=0;
        }else if(state==0){
            state=1;
            count++;
        }
    }
    return count;
}
int main(){
    char str[100];
    printf("Input the string: ");
    fgets(str,sizeof(str),stdin);

    int totalwords=countwords(str);
    printf("Total number of words in the string is : %d\n",totalwords);
    
    return 0;
}