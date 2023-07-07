//Q-2 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTED FOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s,t=11;
clrscr();
for(r=1;r<=5;r++){
for(s=1;s<=r;s++){
printf(" %d",t++);}
printf("\n");}
getch();
}
/*OUTPUT= 11
	  12 13
	  14 15 16
	  17 18 19 20
	  21 22 23 24 25
*/
