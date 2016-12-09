/*
 ============================================================================
 Name        : V00875106A4P1.c
 Author      : Gursewak Singh
 Assignment  : A4
 Copyright   : Your copyright notice
 Description : Decimal to roman
 ============================================================================
 */
#include<stdio.h>
#include<stdlib.h>

  int main(){
     int input;
     int thousand,hundred,ten,one;
     while(1){
     printf("\nEnter the number between 1-4999: ");
     fflush(stdout);
      scanf("%d",&input);


      printf("\n");
      if(input<=0 || input>4999){
          printf("Invalid input!Program will exit.");
          break;

      }

      thousand = (input/1000)*1000;
      hundred = ((input/100)%10)*100;
      ten = ((input/10)%10)*10;
      one = ((input/1)%10)*1;

      if(thousand==1000)
          printf("M");
     else if(thousand==2000)
         printf("MM");
      else if(thousand==3000)
          printf("MMM");
      else if(thousand==4000)
    	  printf("MMMM");



      if(hundred==100)
          printf("C");
      else if(hundred==200)
          printf("CC");
      else if(hundred==300)
         printf("CCC");
    else if(hundred==400)
         printf("CD");
     else if(hundred==500)
         printf("D");
    else if(hundred==600)
         printf("DC");
     else if(hundred==700)
          printf("DCC");
    else if(hundred==800)
          printf("DCCC");
     else if(hundred==900)
          printf("CM");



     if(ten==10)
          printf("X");
      else if(ten==20)
          printf("XX");
      else if(ten==30)
          printf("XXX");
      else if(ten==40)
          printf("XL");
      else if(ten==50)
          printf("L");
      else if(ten==60)
          printf("LX");
      else if(ten==70)
          printf("LXX");
      else if(ten==80)
          printf("LXXX");
      else if(ten==90)
          printf("XC");


      if(one==1)
          printf("I");
      else if(one==2)
          printf("II");
      else if(one==3)
          printf("III");
      else if(one==4)
          printf("IV");
      else if(one==5)
          printf("V");
      else if(one==6)
          printf("VI");
      else if(one==7)
          printf("VII");
      else if(one==8)
          printf("VIII");
      else if(one==9)
          printf("IX");





      }
return 0;
  }


