#include<stdio.h>

int
main ()
{
  int n;
  int count = 0;
  scanf ("%d", &n);
  while (n > 1)
    {
      if (n % 2 == 0)
	{
	  n = n / 2;
	}
      else
	{
	  n = n * 3 + 1;
	}
      count++;
    }
  printf ("%d\n", count);
}