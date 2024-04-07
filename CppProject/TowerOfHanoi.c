#include<stdio.h>
#include<conio.h>
void tower(int n,char from,char aux,char to)
{
    if(n==1)
     { printf("\nmove disk 1 from tower %c to tower %c ",from,to);
     }
    else {
    tower(n-1,from,to,aux);
     printf("\nmove disk %d from tower %c to tower %c ",n,from,to);
     tower(n-1,aux,from,to);
    }
}
void main()
{   int n=3;
    tower(n,'A','B','C');
    getch();
}