/* Write a Program to print the sum and product
of digits of an integer.
*/

#include <stdio.h>

int main()
{
  int n;
  int dig, sum, pro;

  printf("Enter an integer number :\n");
  scanf("%d", &n);

  sum = 0;
  pro = 1;

  for (int i = 0; i < n; i++)
  {
    dig = n % 10;
    sum += dig;
    pro *= dig;
    n = n / 10;
  }
  printf("\nSUM of all Digits is : %d", sum);
  printf("\nPRODUCT of all digits: %d", pro);

  return 0;
}