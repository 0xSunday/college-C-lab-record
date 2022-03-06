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
    printf("\n1:show adress of each the character of string");
    printf("\n2:concatenate without library function");
    printf("\n3:Concatenate Strings");
    printf("\n4:Compare Strings");
    printf("\n5:Find Length of String");
    printf("\n6:convert lower to upper case");
    printf("\n7:convert upper to lower case");
    printf("\n8:calculate number 0f vowels");
    printf("\n9:Find Reverse of String");
    printf("\n10:exit");
    printf("\n-------------*******---*******--------------\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("enter the string=");
      scanf("%s", str1);
      for (i = 0; i <= strlen(str1); i++)
      {
        printf("%u\t", &str1[i]);
      }
      break;

    case 2:
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

    case 3:
      printf("\nEnter First String: ");
      scanf("%s", str1);
      printf("Enter Second string: ");
      scanf("%s", str2);
      strcat(str1, str2);
      printf("String After Concatenation : %s\n\n", str1);
      break;

    case 4:
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

    case 5:
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
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
          str1[i] = str1[i] + 32;
        }
      }
      printf("After:-%s\n", str1);

      break;

    case 8:
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

    case 9:
      printf("Enter String: ");
      scanf("%s", str1);
      strrev(str1);
      printf("Reverse string : %s\n\n", str1);
      break;

    case 10:
      exit(0);
      break;
    default:
      printf("Invalid Input. Please Enter valid Input.\n\n ");
    }
  } while (ch != 11);
}