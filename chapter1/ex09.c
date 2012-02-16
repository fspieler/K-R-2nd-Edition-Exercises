//K&R 2nd Edition exercise 1-9
//Fred Spieler

#include <stdio.h>

main(){
	char input, last;
	last = '!';

	while( (input = getchar() ) != EOF)
	{
		if( input != ' ' || last != ' ')
		{
			last = input;
			printf("%c",input);
		}
	}
}
/* Output:
fred@fred-MT6831:~/Documents/K-R-2nd-Edition-Exercises/chapter1$ cat ex09_input | ./a.out 
This is a test paragraph. Output should be regularly spaced.

There should be two newline characters before this paragraph.
*/
