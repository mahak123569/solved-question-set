#include <stdio.h>
    void printbreaknotes (int amount){
    int notes[]={100,50,20,10,5,2,1};
     for(int i=0;i<7;i++){
int currentnote= notes[i];
int notecount =amount/currentnote;
printf("%d notes of %d\n",notecount,currentnote);
amount=amount%currentnote;
}
    }

int main()
{
    int amount;
    printf("Enter amount: ");
        scanf("%d",&amount);

    printbreaknotes(amount);

    return 0;
}