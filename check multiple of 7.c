#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("enter the number:");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("yes");
    }
    else
    { 
        printf("no");
    }
    getch();
}
