//K&R 2nd Edition exercise 1-6
//Fred Spieler

#include <stdio.h>

main()
{
	int i;
	for(i = 0; i < 10; i++)
		printf("'getchar() != EOF' evaluates to : '%d'\n", getchar() != EOF);
}
/* Output:
fred@fred-MT6831:~/Documents/K-R-2nd-Edition-Exercises/chapter1$ cat ex06_input | ./a.out 
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '1'
'getchar() != EOF' evaluates to : '0'
*/
