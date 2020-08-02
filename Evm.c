#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
void main()
 {
    int c=0,b=0,a=0,s=0,o=0,n,i,num=1;
    char ch='y';
    clrscr();
    printf("\t\t\t\t**********\n\t\t\t|||||welcome in election|||||\n");
    printf("|1->bjp|\n|2->cong|\n|3->aap|\n|4->spa|\n|5->other|\n");
    do
{    textcolor(YELLOW);
     cprintf("press digit");
     printf("\n");
     scanf("%d",&n);
	switch(n)
       {
	 case 1:b++;
		for(i=1;i<80;i++)
		 { sound(800);
		   delay(20);
		 }nosound();
		break;
	case 2:c++;
		for(i=1;i<80;i++)
		 { sound(800);
		   delay(20);
		 } nosound();
		break;
	case 3:a++;
		for(i=1;i<80;i++)
		 { sound(800);
		   delay(20);
		 }nosound();
		break;
	case 4:s++;
		for(i=1;i<80;i++)
		 { sound(800);
		   delay(20);
		 }nosound();
		break;
	case 5:o++;
		for(i=1;i<80;i++)
		 { sound(800);
		   delay(20);
		 }nosound();
		break;
	default: printf("not valid\nvote dismiss");
	 break;
       }
	 clrscr();
	 printf("\t**********\n|||||welcome in election|||||\n");
	 printf("|1->bjp|\n|2->cong|\n|3->aap|\n|4->spa|\n|5->other|\n");
	 printf("\nif next voter then press y else n\n");
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(ch=='y')
	    num++;
	 else{
	      printf("\n!!voting complete!!\n");
	      break;
	      }
}while(ch=='y');
       printf("\ntot=\t{%d}",num);
       printf("\nbjp=\t{%d}",b);
       printf("\ncong=\t{%d}",c);
       printf("\naap=\t{%d}",a);
       printf("\nspa=\t{%d}",s);
       printf("\nother=\t{%d}",o);
getch();
}
