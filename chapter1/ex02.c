#include <stdio.h>

main(){
	printf("Hello world\c\n");
}

/* Output:
ex02.c: In function ‘main’:
ex02.c:4:9: warning: unknown escape sequence: '\c' [enabled by default]
fred@fred-MT6831:~/Documents/K-R-2nd-Edition-Exercises/chapter1$ ./a.out 
Hello worldc
*/
