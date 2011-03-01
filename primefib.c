#include <stdio.h>

int is_prime(int n)
{
  int i;
  
  for (i = 2; i * i <= n; i++)
    {
      if (n % i == 0) return 0;
    }

  return 1;
}

int get_prime_fib(int i, int j, int max)
{
  if (is_prime(j) && j > max)
    {
      return j;
    }

  return get_prime_fib(j, i + j, max);
}

int main()
{
  int max = 227000;
  int pf;
  int i;
  int sum = 0;
  
  pf = get_prime_fib(1, 2, max) + 1;
  printf ("%d\n", pf);

  for (i = 2; i * i <= pf; i++)
    {
      if (pf % i == 0 && is_prime(i))
        {
          sum = sum + i;
        }
    }

  printf ("%d\n", sum);
}
