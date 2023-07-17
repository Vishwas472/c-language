#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,ans;
  clrscr();
  printf("enter your 2 value:");
  scanf("%d%d",&a,&b);
  ans=(a*a)+2*(a*b)+(b*b);
  printf("your ans=%d",ans);
  getch();
}