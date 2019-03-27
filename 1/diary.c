#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "diaryh.h"
int main()
{
	int a;
	char name[100];
	char pass[100];
	char word[100];
	
	int b;
	printf("\n\t*************************************\n");
	printf("\tHey....!!!!\nWelcome to personal diary management system!\n");
	printf("\n\t*************************************\n");
	printf("Add account\t[1]:\n");
	scanf("%d",&a);
	if (a==1)
	{
		printf("Enter your name:\n");
		scanf("%s",name);
		printf("Enter password:\n");
		scanf("%s",pass);
		printf("Confirm Password\n");
		scanf("%s",word);
		
		
	}
	if (strcmp(pass,word)==0)
	{
		ma_in(name);
	}
	else 
	{
		printf("invalid password");
		return 0;
	}
	
}