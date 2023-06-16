#include <stdio.h>
 
void swap(int *num1p, int *num2p)
{
  int temp = *num1p;
  *num1p = *num2p;
  *num2p = temp;
}
 
int main()
{
  int num1, num2;
  printf("Enter First Number ");
  scanf("%d", &num1);
  printf("Enter Second Number ");
  scanf("%d", &num2);
  swap(&num1, &num2);
  printf("\nAfter Swapping: \n First number = %d,\n Second number = %d",num1, num2);
  return 0;
}