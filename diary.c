#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "diaryh.h"
int main()
{
	char name[100];
	char pass[100];
	
	printf("\n\t*************************************\n");
	printf("\n\tWelcome to personal diary management system!\n");
	printf("\n\t*************************************\n");
	printf("Enter your name:\n");
	fflush(stdin);
	scanf("%s",name);
	printf("Enter password:\n");
	fflush(stdin);
	scanf("%s",pass);
	
	if (login(name,pass)==0)
	{
		printf("Login success\n");
		ma_in();
	}
	else 
	{
		printf("Invalid password and username combination\n");
	}
	return 0;
}