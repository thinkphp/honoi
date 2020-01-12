/*
 *
 * Towers of Hanoi.
 * n = 2 => ac, ab, cb
 */
#include <stdio.h>

void movesDisks(int n, char a, char b, char c) {

     if(n == 1) {

     	printf("(%c -> %c)", a, b); 

     } else {

         movesDisks(n - 1, a, c, b);

         movesDisks(1, a, b, c);

         movesDisks(n - 1, c, b, a);  

     }    

};

int main(int argc, char const *argv[])
{

    movesDisks(2, 'a','b','c'); 

    printf("\n");

	return 0;
}