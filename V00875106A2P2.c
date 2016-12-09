/*
 *  Author:      Gursewak Singh
 *  Date:        Sep 27, 2016
 *  File name:   V00875106A2P2.c
 *  Description: Starter code for CSC 111 A2 Part 2.
 */

#include <stdio.h>
#include <stdlib.h>

/* ArithmeticSequence(start, increment, count)

   Print an arithmetic sequence with the provided properties:
    - start: first value in the sequence
    - increment: the increment value between each pair of values in the sequence
    - count: number of terms to generate

*/
void ArithmeticSequence(int start, int increment, int count)
{
	int terms = 0;
		printf("Arithmetic Sequence:");
		while(terms < count) {
			printf(" %d", start);
			start = start + increment;
			terms++;
		}
		printf("\n");

}
	/* HarmonicSequence()

   Print the first 10 entries of the harmonic sequence.
*/
void HarmonicSequence(){

	int j = 1;
	printf("Harmonic Sequence:");
	for(j = 1; j < 11; j++) {
		printf(" %.2f", 1.0/j);
	}
	printf("\n");
}



/* LeonardoSequence()

   Print the first 10 entries of the Leonardo sequence.

*/
void LeonardoSequence(){
	int n = 1;
		int m = 1;
		int count = 0;
		printf("Leonardo Sequence: ");
		printf("%d", n);
		printf("%d", m);
		while(count < 8) {
		int nextnum = n + m + 1;
			printf(" %d", nextnum);
			n = m;
			m = nextnum;
			count++;
		}
}

/* Do not change any code below this line */
int main(){
	ArithmeticSequence(17, 6, 5);
	ArithmeticSequence(10, 6, 10);
	HarmonicSequence();
	LeonardoSequence();
	return 0;
}
