#include<stdio.h>
#include<conio.h>

void printLine();
void add(int,int);
sub(int,int);
void main()
{
	int ans;
	clrscr();
	printLine();
	add(10,20);
	printLine();
	//printf("\nSubtraction : %d\n",sub(10,20));
	ans=sub(10,20);
	printf("\nSubtraction : %d\n",ans);
	printLine();
	getch();
}
void printLine()
{
	for(int i=0;i<20;i++)
	{
		printf("*");
	}
}
void add(int a,int b)
{
	printf("\nAddition : %d\n",a+b);
}
sub(int a,int b)
{
	return a-b;
}