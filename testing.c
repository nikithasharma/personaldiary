#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a;
	char name[100];
	char pass[8];
	
	int b;
	int i;
	printf("\n\t*************************************\n");
	printf("\tHey....!!!!\nWelcome to personal diary management system!\n");
	printf("\n\t*************************************\n");
	printf("Enter username:\n");
	scanf("%s",name);
	printf("Enter password(8 characters):\n");
	scanf("%s",pass);
	if (login(name,pass)==0)
	{
		//ma_in();
		printf("Login success\n");
	}
	else 
	{
		printf("Invalid password and username combination\n");
	}
	change();
	return 0;
}
char word[10]="password";
	void change()
	{
		char pass[10];
		printf("Enter old password:\n");
		scanf("%s",pass);
		if(!strcmp(pass,word))
		{
			char newp[10];
			printf("Enter new password:\n");
			scanf("%s",newp);
			strncpy(word,newp,10);
			printf("%s",word);
			printf("Success");
		}
	}
    int login(char *name, char *pass)
    {
		printf("%s",word);
     if(!strcmp(name,"nik") && !strcmp(pass,word))
     {
		return 0;
     }
	 else
     {
		return 1;
     }
    }