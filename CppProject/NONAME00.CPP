#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{ int x=38,y=12,i,j=0;
 char arrow;
 clrscr();
 gotoxy(x,y);
 printf("*");
 do{
    scanf("%c",&arrow);
    j++;
    switch(arrow)
    { case 'a':
	for(i=x;i>=1;i--)
	{ 	clrscr();
	gotoxy(i,y);
	printf("*");
	delay(100);

	}
      case 's':
	for(i=y;i<=25;i++)
	{ gotoxy(x,i);
	printf("*");
	delay(200);
	clrscr();
	}
      case 'd':
	for(i=1;i<=76;i++)
	{ gotoxy(i,y);
	printf("*");
	delay(100);
	clrscr();
	}
      case 'w':
	for(i=25;i>=1;i--)
	{ gotoxy(x,i);
	printf("*");
	delay(200);
	clrscr();
	}
      break;
    }
   }while(j<6);


}