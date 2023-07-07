//Q-5 WRITE A PROGRAM TO PRINT THE BELOW PATTERN USING NESTED FOR LOOP.
#include<stdio.h>
#include<conio.h>
void main(){
int r,s,t,u,v;
clrscr();
for(r=1;r<=5;r++){
for(s=1;s<=r;s++){
printf("%d",s);}
for(t=4;t>=r;t--){
printf(" ");}
for(u=4;u>=r;u--){
printf(" ");}
for(v=r;v>=1;v--){
printf("%d",v);}
printf("\n");}
getch();
}