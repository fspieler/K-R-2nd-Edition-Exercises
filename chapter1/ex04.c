#include <stdio.h>

main()
{
	float fahr, celsius;
	
	printf(" Cels. Fahrenheit\n");	
	for(celsius = -20; celsius <= 160; celsius += 20)
	{
		fahr = (9.0/5.0 * celsius) - 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
	}
}
/* Output:
 Cels. Fahrenheit
 -20.0 -68
   0.0 -32
  20.0   4
  40.0  40
  60.0  76
  80.0 112
 100.0 148
 120.0 184
 140.0 220
 160.0 256
*/
