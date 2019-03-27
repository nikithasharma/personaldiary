#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include "diaryh.h"
void editrecord()
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
		printf("\nEnter the date you want to edit:");
		scanf("%s",filename);
		sprintf(fname,"notepad %s.txt",filename);
		system( fname );
		printf("\n\nDO YOU WANT TO VIEW ANOTHER RECORD(Y/N):\n\n");
		fflush(stdin);
		scanf("%c",&another);
	}
	char p;
	while (another=='N'||another=='n')
	{
		printf("DO YOU WANT TO GO BACK TO MAIN MENU[Y/N]:\n");
		scanf("%c",&p);
		if(p=='Y'|| p=='y')
		{
			ma_in();
		}
		else if(another=='N'||another=='n')
		{
			printf("\n\n\tPRESS ANY KEY TO EXIT...");
			getch();
		}
		else
		{
			printf("\nPress a valid key [Y/N]\n");
		}
	}
}
}