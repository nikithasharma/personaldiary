#include <stdio.h>
#include <conio.h>
#include <time.h>
#include "diaryh.h"
struct record
{

    	char time[6];
	char place[25];
	char note[500];

} ;
void addrecord(char *p)
{
	FILE *fp;
	struct record e ;
	char filename[15];
	printf("enter today's date[dd-mm-yyyy]:\n");
	scanf("%c",filename);
	fflush(stdin);
	gets(filename);
	fp = fopen (filename,"a") ;
	if (fp == NULL)
	{
		
		{
			printf("\nSYSTEM ERROR...");
			printf("\nPRESS ANY KEY TO EXIT");
			getch();
			return 0;
		}
	}
	time_t t=e.time;
	time(&t);
	fprintf(fp,"%s\n",ctime(&t));
	fprintf(fp,"Hey,..%c\n",p);
	printf("enter your place: ");
	scanf("%s",e.place);
	fputs(fp,"PLACE:%s",e.place);
	
	printf("NOTE:");
	gets(e.note);
	fputs( &e, sizeof ( e ), 1, fp ) ;
	
   	printf("\nYOUR RECORD IS ADDED...\n");
	
   
	

   	return 0;
}
	