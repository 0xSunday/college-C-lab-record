/*
Write a function that checks whether a given
string is Palindrome or not. Use this function to
find whether the string entered by user is
Palindrome or not.
*/
#include <stdio.h>
#include<string.h>

void isPalindrome(char str[])
{

  int l = 0;
  int h = strlen(str) - 1;

  while (h > l)
  {
    if (str[l++] != str[h--])
    {
      printf("%s is not a palindrome\n", str);
      return;
    }
  }
  printf("%s is a palindrome\n", str);
}

int main()
{

  char str[20];
  printf("enter any name to find it is a Palindrome or not\n");
  gets(str);
  isPalindrome(str);

  return 0;
} 
