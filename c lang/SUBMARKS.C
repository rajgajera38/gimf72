#include<stdio.h>
#include<conio.h>
void main()
{
int eng,maths,sci,history,gujarati,add;
float per;
clrscr();
	 printf("enter the marks of eng");
	 scanf("%d",&eng);
	 printf("\nyou have entered the marks for eng is %d",eng);

	 printf("\nenter the marks of maths");
	 scanf("%d",&maths);
	 printf("\nyou have entered the marks for maths is %d",maths);

	 printf("\nenter the marks of sci");
	 scanf("%d",&sci);
	 printf("\nyou have entered the marks for sci is %d",sci);

	 printf("\nenter the marks of history");
	 scanf("%d",&history);
	 printf("\nyou have entered the marks for history is %d",history);

	 printf("\nenter the marks of gujarati");
	 scanf("%d",&gujarati);
	 printf("\nyou have entered the marks for gujarati is %d",gujarati);

	 add=eng+maths+sci+history+gujarati;
	 printf("\nadd is %d",add);

	 per=((float)add)/5;
	 printf("\nper is %f",per);
getch();
}
