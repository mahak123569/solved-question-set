
#include <stdio.h>
int sumNatural(int n);
int main() {
    int n=20;
printf("sum of %d natural number is = %d ",n,sumNatural(20));
return 0;
}
int sumNatural(int n){
    if(n==1){
    return 1;
    }
    int sumNaturalm1 = sumNatural(n-1);//SUM OF 1 TO N
    int sumNatural = sumNaturalm1+n;
    return sumNatural;

}