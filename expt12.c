// Write a Program to perform following actions
// on an array entered by the user:-
// a) Print the even-valued elements
// b) Print the odd-valued elements
// c) Calculate and print the sum and average of
// the elements of array
// d) Print the maximum and minimum element of
// array
// e) Remove the duplicates from the array
// f) Print the array in reverse order

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
  int i;
  printf("1.For the even elements int the array. \n");
  printf("2.For the odd elements int the array. \n");
  printf("3.For the sum and average of array. \n");
  printf("4.For the minimum and maximum element in array. \n");
  printf("5.For the deleting of the duplicate. \n");
  printf("6.For the reverse printing of array. \n");
  printf("7.Exit of the program. \n");
  printf("---------------------------------------------------------------\n");
  printf("Enter the choice: ");
  scanf("%d", &i);
  void even(void);
  if (i == 1)
    even();
  void odd(void);
  if (i == 2)
    odd();
  void sum_average(void);
  if (i == 3)
    sum_average();
  void min_max(void);
  if (i == 4)
    min_max();
  void deletion(void);
  if (i == 5)
    deletion();
  void reverse(void);
  if (i == 6)
    reverse();
  if (i >= 7)
    exit(0);
}
void even()
{
  int array[100], i, num;
  printf("Enter the size of an array \n");
  scanf("%d", &num);
  printf("Enter the elements of the array \n");
  for (i = 0; i < num; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("Even numbers in the array are - ");
  for (i = 0; i < num; i++)
  {
    if (array[i] % 2 == 0)
    {
      printf("%d \t", array[i]);
    }
  }
}
void odd()
{
  int array[100], i, num;
  printf("Enter the size of an array \n");
  scanf("%d", &num);
  printf("Enter the elements of the array \n");
  for (i = 0; i < num; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("\n Odd numbers in the array are - ");
  for (i = 0; i < num; i++)
  {
    if (array[i] % 2 != 0)
    {
      printf("%d \t", array[i]);
    }
  }
}
void sum_average()
{
  int n, i;
  float num[100], sum = 0.0, avg;
  printf("Enter the numbers of elements: ");
  scanf("%d", &n);
  while (n > 100 || n < 1)
  {
    printf("Error! number should in range of (1 to 100).\n");
    printf("Enter the number again: ");
    scanf("%d", &n);
  }
  for (i = 0; i < n; ++i)
  {
    printf("%d. Enter number: ", i + 1);
    scanf("%f", &num[i]);
    sum += num[i];
  }
  avg = sum / n;
  printf("Average = %.2f", avg);
}
void min_max()
{
  int a[1000], i, n, min, max;
  printf("Enter size of the array : ");
  scanf("%d", &n);
  printf("Enter elements in array : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  min = max = a[0];
  for (i = 1; i < n; i++)
  {
    if (min > a[i])
      min = a[i];
    if (max < a[i])
      max = a[i];
  }
  printf("minimum of array is : %d", min);
  printf("\nmaximum of array is : %d", max);
}
void deletion()
{
  int arr[100], i, j, k, Size;
  printf("\n Please Enter Number of elements in an array : ");
  scanf("%d", &Size);
  printf("\n Please Enter %d elements of an Array \n", Size);
  for (i = 0; i < Size; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < Size; i++)
  {
    for (j = i + 1; j < Size; j++)
    {
      if (arr[i] == arr[j])
      {
        for (k = j; k < Size; k++)
        {
          arr[k] = arr[k + 1];
        }
        Size--;
        j--;
      }
    }
  }
  printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
  for (i = 0; i < Size; i++)
  {
    printf("%d\t", arr[i]);
  }
}
void reverse()
{
  int arr[100], n;
  // Initialize array
  printf("Enter size of the array : ");
  scanf("%d", &n);
  printf("Enter elements in array : ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  // Calculate length of array arr
  printf("Original array: \n");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
  printf("Array in reverse order: \n");
  // Loop through the array in reverse order
  for (int i = n - 1; i >= 0; i--)
    printf("%d ", arr[i]);
}