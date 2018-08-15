#include<stdio.h>
#include<conio.h>
void main()
{
int a; printf("\n%d,enter the number");
scanf("%d",&a);
if(a==0)
{
printf("\n%d,the value is zero",a);
}
else if(a>0)
{
printf("\n%d,the value is positive",a);
}else{
printf("\n%d,the value is negative",a);
}
getch();
}