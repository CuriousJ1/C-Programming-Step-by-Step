#include <stdio.h>
#include <stdlib.h>
 
// declare the prototype of get_max
int get_max(int *arr, int n);
 
// declare the prototype of get_min
int get_min(int *arr, int n);
 
// Now implement the function get_max
int get_max(int *arr, int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[0] < arr[i])
      arr[0] = arr[i];
  }
  return arr[0];
}
 
// Now implement the function get_min
int get_min(int *arr, int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[0] > arr[i])
      arr[0] = arr[i];
  }
  return arr[0];
}
 
int get_max_min_sum(int *arr, int n, int *p_sum)
{
  // call get_max to get the maximum in the array arr, you will need to pass the base address arr and n to this function.
  get_max(arr, n);
 
  // Call get_min in the similar way and get the minimum value in the array, here also you will need to pass 2 parameters, base address of the array and the number of elements in that array.
  get_min(arr, n);
 
  // find the sum of the maximum and minimum and then assign the sum to the integer pointed by p_sum.
  *p_sum = get_max(arr, n) + get_min(arr, n);
 
  return *p_sum;
}
 
int main()
{
  int arr[] = {12, 25, 13, 4, 58, 9, 67, 20};
  int *p_sum, max, min, sum;
 
  p_sum = (int *)malloc(sizeof(int) * 1);
  if (p_sum == NULL)
  {
    printf(stderr, "Unable to allocate memory");
    exit(1);
  }
 
  min = get_min(arr, sizeof(arr) / sizeof(arr[0])); // why
  max = get_max(arr, sizeof(arr) / sizeof(arr[0])); // why
 
  printf("min is: %d\n", min);
  printf("max is: %d\n", max);
 
  sum = get_max_min_sum(arr, sizeof(arr) / sizeof(arr[0]), p_sum);
 
  printf("sum of min and max is: %d\n", sum);
 
  free(p_sum);
 
  return 0;
}