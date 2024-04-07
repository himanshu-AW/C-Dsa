
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{ int a,b,c,i,j,k,d,e,f,g;
  clrscr();
 /* gotoxy(35,24);
  for(i=35;i>28;i--)
  { gotoxy(i,24);
  printf("Welcome to Red Bus");
  delay(150);
  }*/
  delay(2000);
  clrscr();
  goto(24,12);
  printf("1.Bus booking\n2.Bus Location\n3.Refund\n4.Exit");
  scanf("%d",&a);
  delay(1000);
  clrscr();
  switch(a)
  { case 1:
	printf("\nEnter Your Name :");
	scanf("%s",b);
	printf("\n Enter your Destiny :");
	scanf("%s",c);
	printf("\n Enter date : ");
	scanf("%d%d%d",&d,&e,&f);
	delay(500);
	printf("\n1.For AC\n2.For Sleeper");
	scanf("%d",&g);





  }

  getch();
}