#include<stdio.h>
#include<conio.h>
struct student {
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
    struct student s1;
    struct student  *p ;
    p = & s1 ;
    printf("\n Enter the name : ") ;
    scanf("%s",p->name);
    printf("\n Enter the Roll_no : ");
    scanf("%d",&p->marks);
    printf("\n Enter Marks : ");
    scanf("%f",&p->marks);
    printf("\n NMAE : %s ", p->name);
    printf("\n ROLL_NO. : %d ", p->roll_no);
    printf("\n MARKS : %f ", p->marks);
    return (0);

}