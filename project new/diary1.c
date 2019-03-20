#include <stdio.h>
#include <stdlib.h>
#include "diaryh.h"
#include <conio.h>
void ma_in(char *p)
{
	int b;
	printf("******MAIN MENU*******\n");
	printf("Add records\t[1]\n");
	printf("View records\t[2]\n");
	printf("Edit record\t[3]\n");
	printf("Delete record\t[4]\n");
	printf("Change password\t[5]\n");
	printf("Exit\t[6]\n");
	printf("Enter your choice:");
	scanf("%d",&b);
		
		
	switch(b)
	{
		case 1:
			addrecord(p);
			break;
		
		case 2:
			viewrecord();
			break;
		/*
		case 3:
			editrecord();
			break;
		case 4:
			delrecord();
			break;

		case 5:
			change();
			break;
		case 6:
			printf("\n\n\n\tThankyou for using this software\n\n");
			getch();
			exit(0);
		*/
		default:
			printf("\nYOU HAVE ENTERED WRONG CHOICE....");
			printf("\nPRESS ANY KEY TO TRY AGAIN");
			getchar();
			break;
	}
	
}
	

