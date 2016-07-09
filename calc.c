/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int a,b;
int c,ch;
printf("\nEnter the number1 : ");
scanf("%d",&a);

printf("\nEnter the number2 : ");
scanf("%d",&b);
printf("\n Enter the operation that you want to perform : ");
scanf("%d",&ch);

switch(ch)
{
case 1:
c=a+b;
printf("\n");
printf("\n Addition is :%d",c);
break;

case 2:
c=a-b;
printf("\n");
printf("\n Subtraction is :%d",c);
break;

case 3:
c=a/b;
printf("\n");
printf("\n Divion is :%d",c);
break;

case 4:
c=a%b;
printf("\n");
printf("\n Mod is :%d",c);
break;
}
return 0;
}

