//Q-4 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTEDFOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s,t;
clrscr();
for(r=1;r<=5;r++){
for(t=1;t<=5;t++){
printf(" ");}
for(s=5;s>=r;s--){
printf("%d",r%2);}
printf("\n");}
getch();
}