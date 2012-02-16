//K&R 2nd Edition exercise 1-8
//Fred Spieler

#include <stdio.h>

main(){
	char input;
	int blanks=0, tabs=0, newls=0;
	while( (input = getchar() ) != EOF)
	{
		switch(input){
			case ' ': blanks++;break;
			case '\t': tabs++;break;
			case '\n': newls++;break;
			default:break;
		}
	}
	
	printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newls);
}
/* Output:
fred@fred-MT6831:~/Documents/K-R-2nd-Edition-Exercises/chapter1$ cat ex08_input | ./a.out 
blanks: 20
tabs: 3
newlines: 4
*/
