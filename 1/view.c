#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include "diaryh.h"
void viewrecord()
{
	system("cls");
	FILE *fp;
	FILE *v;
	fp=fopen("dat.txt","r");

	if (fp == NULL)
	{
		
		{
			printf("\nSYSTEM ERROR...");
			printf("\nPRESS ANY KEY TO EXIT");
			getch();
			return ;
		}
	}
	char ch,fname[50],filename[50];
	char another='Y';
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	while (another=='Y'||another=='y')
	{
		printf("\nenter the date you wanted to view:");
		scanf("%s",filename);
		sprintf(fname,"%s.txt",filename);
		v = fopen (fname,"r") ;
	
		if (fp == NULL)
		{
		
			{
				printf("\nSYSTEM ERROR...");
				printf("\nPRESS ANY KEY TO EXIT");
				getch();
				return ;
			}	
		}
		char s;
		while((s=fgetc(v))!=EOF)
		{
			printf("%c",s);
		}
		
		printf("\n\nDO YOU LIKE TO VIEW ANOTHER RECORD(Y/N):\n\n");
		fflush(stdin);
		scanf("%c",&another);
		

	}
	char p;
	while (another=='N'||another=='n')
	{
		printf("DO YOU LIKE TO GO BACK TO MAIN MENU[Y/N]:\n");
		scanf("%c",&p);
		if(p=='Y'|| p=='y')
		{
			ma_in();
		}
		else
		{
			printf("\n\n\tPRESS ANY KEY TO EXIT...");
			getch();
	   		return ;
		}
	
	}
}