#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  char ch='y';
  static  int pen,pencil,book,bag,tot,dis,n1,n2,n3,n4,a,netamt;
  clrscr();
  printf("welcome in shop\n");
  do
  {
    printf("--------------------------------------\n");
    printf("1-pen\t2-pencil\t3-book\t4-bag\n");
    printf("--------------------------------------\n");
    printf("enter uour chocice\n");
    scanf("%d",&a);
    if(a==1){
	     printf("pen = 30\n enter qty= ");
	     scanf("%d",&n1);
	     pen=30*n1;
	      printf("pen =%d\n",pen);
	    }

	   else if(a==2){
	     printf("pencil = 20\n enter qty= ");
	     scanf("%d",&n2);
	     pencil=20*n2;
	       printf("pencil =%d\n",pencil);
	    }
	    else if(a==3){
	     printf("book = 500\n enter qty= ");
	     scanf("%d",&n3);
	     book=500*n3;
	     printf(" book =%d\n",book);
	     }
	    else if(a==4){
	     printf("bag = 800\n enter qty= ");
	     scanf("%d",&n4);
	     bag=800*n4;
	      printf(" bag =%d\n",bag);
	     }
	     else
		 printf("not match\n");
	     printf("if you wnat to buy  more press y or n\n");
	     fflush(stdin);
	     scanf("%c",&ch);
	     if(ch=='a')
	     exit(0);
	 } while (ch=='y');


   tot=pen+pencil+bag+book;
    if(tot>2000)
       dis=tot*(float)20/100;
       printf("dis=%d\n",dis);
    netamt=tot-dis;
   printf("total is =%d\nnetamt is =%d",tot,netamt);
   getch();
}
