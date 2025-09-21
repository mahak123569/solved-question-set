#include <stdio.h>
int main()
{
    int amount;
    printf("Input the amount: ");
    scanf("%d", &amount);
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++)
    {
        int currentnotes = notes[i];
        int notescount = amount / currentnotes;
        amount %= currentnotes;
        printf("%d notes of %d\n", notescount, currentnotes);
    }
    return 0;
}