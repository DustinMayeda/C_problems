# include <stdio.h>

# define LOWER 0      /* the lower limit of table */
# define UPPER 300    /* the upper limit of table */
# define STEP 20      /* the step size */

/* print Fahrenheit-Celsius table */

main()
{
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}
