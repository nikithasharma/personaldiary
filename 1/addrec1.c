#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>
#include<string.h>
#include "diaryh.h"
struct record
{
	char time[6];
	char place[25];
	char note[1000];
} ;
void addrecord(char *p)
{
	system("cls");
	
	FILE *fp;
	
	struct record e ;
	char another;
	char fname[60];
	char filename[60];
	printf("\n\t*WELCOME TO ADD RECORD MENU*\n");
	printf("Enter the date of the entry[dd-mm-yyyy]:\n");
	scanf("%s",filename);
	sprintf(fname,"%s.txt",filename);
	fp = fopen (fname,"a") ;

	FILE *date=fopen("dat.txt","a");
	fprintf(date,"\n%s",filename);
	if (fp == NULL && date==NULL)
	{
		
		{
			printf("\nSYSTEM ERROR...");
			printf("\nPRESS ANY KEY TO EXIT");
			getch();
			return ;
		}
	}
	time_t t ;
	time(&t);
	fprintf(fp,"%s\n",ctime(&t));
	printf("Enter the place: ");
	scanf("%s",e.place);
	fprintf(fp,"PLACE:%s\n",e.place);
	printf("NOTE:\n");
	fflush(stdin);
	gets(e.note);
	fprintf(fp,"NOTE:%s",e.note);
   	printf("\nYOUR RECORD IS ADDED...\n");
	fclose(fp);
   	fclose(date);
	printf("DO YOU WANT TO GO BACK TO MAIN MENU:[Y/N]:");
	scanf("%c",&another);
	if (another=='Y'||another=='y')
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
	