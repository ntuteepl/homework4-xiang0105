
#include <stdio.h>

int
main ()
{
  int inp, num;

  scanf ("%d", &inp);

  int list[10];

  for (int i = 0; i < inp; i++)
    {
      scanf ("%d", &num);
      list[i] = num;
    }

  for (int i = 0; i < inp; i++)
    {
      for (int j = list[i] - 1; j > 1; j--)
	{
	  if (list[i] % j == 0)
	    {
	      printf ("NO ");
	      break;
	    }
	  else if (j == 2)
	    {
	      printf ("YES ");
	    }
	}
    }

}
