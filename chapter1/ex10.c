//K&R 2nd Edition exercise 1-10
//Fred Spieler

#include <stdio.h>

main(){
	char input;

	while( (input = getchar() ) != EOF)
	{
		if( input == ' ' )
			printf("\\b");	
		else if ( input == '\t' )
			printf("\\t");
		else
			printf("%c", input);
	}
}
