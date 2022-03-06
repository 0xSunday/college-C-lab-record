/*
Write a function to find whether a given no. is
prime or not. Use the same to generate the
prime numbers less than 100.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
  int n, i, c = 0;
  printf("Enter the value of integer:- ");
  scanf("%d", &n);
  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      c = 1;
      break;
    }
  }
  if (n == 1)
  {
    printf("1 is neither a prime nor a composite number.");
  }
  else
  {
    if (c == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }
  return 0;
}