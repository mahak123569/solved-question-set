#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    int  englishletter(char c){
    if((c>='A'&& c<='Z')||(c>='a'&& c<='z')){
    return 1;
}
return 0;
}

int lengthOfLastWord(char* s) {
    int len = strlen(s);
int i = len-1;  
int  count = 0;
while(i>=0 && s[i]==' '){
    i--;
}
    while( i>=0 && englishletter (s[i])){
        count++;
        i--;
    }

    return count;
}

int main(){
    char s[] = "Hello World";
    int result = lengthOfLastWord(s);
    printf("%d",result);
}
return 0;
