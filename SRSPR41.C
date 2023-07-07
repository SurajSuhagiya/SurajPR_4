//Q-1 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTED FOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s;
clrscr();
for(r=41;r<=45;r++){
for(s=41;s<=r;s++){
printf(" %d",s);}
printf("\n");}
getch();
}
/*OUTPUT= 41
	  41 42
	  41 42 43
	  41 42 43 44
	  41 42 43 44 45
*/