/*
write a menu driven program to perform
following operations on strings:
a. Show address of each character in
string
b. Concatenate two strings without using
strcat function
c. Concatenate two strings using strcat
function
d. Compare two strings
e. Calculate length of the string (using
pointer)
f. Convert all lowercase characters to
uppercase
g. Convert all uppercase characters to
lowercase
h. Calculate no.of vowels
i. Reverse the strings
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char str1[20], str2[20];
  int ch, i, j, length = 0;
  char *p;
  do
  {
    printf("\tMENU");
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("\n1:Find Length of String");
    printf("\n2:Find Reverse of String");
    printf("\n3:Concatenate Strings");
    printf("\n4:Copy String ");
    printf("\n5:Compare Strings");
    printf("\n6:convert lower to upper case");
    printf("\n7:show adress of each the character of string");
    printf("\n8:convert upper to lower case");
    printf("\n9:concatenate without library function");
    printf("\n10:calculate number 0f vowels");
    printf("\n11:exit");
    printf("\n-------------*******---*******--------------\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("Enter String: ");
      scanf("%s", &str1);
      p = str1;
      while (*p != '\0')
      {
        length++;
        p++;
      }
      printf("Length of String : %d\n\n", length);
      break;
      
    case 2:
      printf("Enter String: ");
      scanf("%s", str1);
      strrev(str1);
      printf("Reverse string : %s\n\n", str1);
      break;
    case 3:
      printf("\nEnter First String: ");
      scanf("%s", str1);
      printf("Enter Second string: ");
      scanf("%s", str2);
      strcat(str1, str2);
      printf("String After Concatenation : %s\n\n", str1);
      break;
    case 4:
      printf("Enter a String1: ");
      scanf("%s", str1);
      printf("Enter a String2: ");
      scanf("%s", str2);
      printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n", str1, str2);
      strcpy(str2, str1);
      printf("-----------------------------------------------\n");
      printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n", str1, str2);
      break;
    case 5:
      printf("Enter First String: ");
      scanf("%s", str1);
      printf("Enter Second String: ");
      scanf("%s", str2);
      j = strcmp(str1, str2);
      if (j == 0)
      {
        printf("Strings are Same\n\n");
      }
      else
      {
        printf("Strings are Not Same\n\n");
      }
      break;
    case 6:
      printf("enter the string=");
      scanf("%s", str1);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
          str1[i] = str1[i] - 32;
        }
      }
      printf("After:-%s\n", str1);
      break;
    case 7:
      printf("enter the string=");
      scanf("%s", str1);
      for (i = 0; i <= strlen(str1); i++)
      {
        printf("%u\t", &str1[i]);
      }
      break;
    case 8:
      printf("enter the string=");
      scanf("%s", str1);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
          str1[i] = str1[i] + 32;
        }
      }
      printf("After:-%s\n", str1);

      break;
    case 9:
      printf("enter two string values-\n");
      scanf("%s%s", str1, str2);
      for (i = 0; str1[i] != '\0'; ++i)
      {
        printf("\n");
      }
      for (j = 0; str2[j] != '\0'; ++j, ++i)
      {
        str1[i] = str2[j];
      }
      str1[i] = '\0';
      printf("after concatination-\n");
      puts(str1);
      break;
    case 10:
      j = 0;
      printf("Enter the word=\n\t");
      scanf("%s", &str1);
      for (i = 0; str1[i] != '\0'; ++i)
      {
        if (str1[i] == 'a' ||
            str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
          j++;
      }
      printf("totall vowel=%d\n", j);
      break;
    case 11:
      exit(0);
      break;
    default:
      printf("Invalid Input. Please Enter valid Input.\n\n ");
    }
  } while (ch != 11);
}