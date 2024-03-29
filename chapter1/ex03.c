//K&R 2nd Edition exercise 1-3
//Fred Spieler

#include <stdio.h>

main()
{
	float fahr, celsius;
	
	printf("Fahr Celsius\n");	
	for(fahr = 0; fahr <= 300; fahr += 20)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
/*Output:
Fahr Celsius
  0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9
*/
