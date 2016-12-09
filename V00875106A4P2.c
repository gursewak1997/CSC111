

/*
 *  Author:      Gursewak Singh
 *  Date:        Oct. 25, 2016
 *  Assignment:  Assignment 4 Part 2
 *  File name:   V00875106A4P2.c
 *  Description: Read a line of text from the user, capitalize the first
 *	             letter of each word and remove extra spaces from between words.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void read_and_capitalize(){
	char c;


	c = getchar();



		int x=1;
		int y=0;

	while(c != '\n'){


	while (y<1){
		if(islower(c)){
			printf("%c", toupper(c));
			y++;
		}
		c=getchar();
	}
if(isspace(c)){
	while(x>0){
		if(isspace(c))
		c=getchar();
		else{
			printf(" %c", toupper(c));
			x=0;
		}
	}
	x=1;
}
else{
	printf("%c", c);

}
		//Get the next character from the user
		c = getchar();
}
}



int main(void){

	printf("Enter a line of text: ");
	fflush(stdout);
	read_and_capitalize();
	return EXIT_SUCCESS;
}
