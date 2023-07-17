#include<stdio.h>
#include<conio.h>
void main()
{ int p,r,n;
  float i;
  clrscr();
  printf("enter your principle amount and rate of intrest and number of year");
  scanf("%d%d%d",&p,&r,&n);
  i=(p*r*n)/100;
  printf("intrest=%f",i);
  getch();
}