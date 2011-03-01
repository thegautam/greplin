#include <stdio.h>

int subset(int *a, int len, int start, int sum, int *count)
{
  int i;

  for (i = start; i < len; i++)
    {
      if (sum == a[i])
        {
          (*count)++;
        }
      
      subset(a, len, i + 1, sum + a[i], count);
    }
}

int main()
{
  int a[] = 
    {
      3, 4, 9, 14, 15, 19, 28, 37, 47, 50, 54, 56, 59, 61, 70, 73, 78, 81, 92, 95, 97, 99
    };
  int count = 0;
  
  subset(a, sizeof(a) / sizeof(a[0]), 0, 0, &count);

  printf("%d\n", count);
}

