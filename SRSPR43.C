//Q-3 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTED FOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s,t;
clrscr();
for(r=5;r>=1;r--){
for(t=1;t<=r;t++){
printf(" ");}
for(s=r;s<=5;s++){
printf("%d",s);}
printf("\n");}
getch();}
/*OUTPUT=     5
	     45
	    345
	   2345
	  12345
*/