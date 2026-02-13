#include <stdio.h>
int main()
{
  float marks[5], sum = 0, Average;
  printf("Input five subject marks(0-100):\n ");

  for (int i = 0; i < 5; i++)
  {
    scanf("%f", &marks[i]);
    if (marks[i] < 0 || marks[i] > 100)
    {
      printf("please input the number in the range of (0-100)\n");
      return 1;
    }

    sum += marks[i];
    Average = sum / 5.0;
  }
  printf("Average marks=%.2f\n", Average);

  return 0;
}
